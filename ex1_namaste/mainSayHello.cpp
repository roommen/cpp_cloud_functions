#include <iostream>
#include <node.h>
#include "sayHello.h"

using namespace v8;

void wrapperSayHello(const FunctionCallbackInfo<Value>& args) {
	Isolate *isolate = args.GetIsolate();

	v8::String::Utf8Value name(args[0]->ToString());
	std::string str_name = std::string(*name);
	SayHello sh(str_name);

	args.GetReturnValue().Set(String::NewFromUtf8(isolate, sh.say()));
}

void init(Local<Object> exports) {
	NODE_SET_METHOD(exports, "sayName", wrapperSayHello);
}

/* The entry point to initialize the hello.node module */
NODE_MODULE(hello, init)
