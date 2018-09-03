#include <iostream>
#include <node.h>
#include "sayNamaste.h"

using namespace v8;

void wrapperSayNamaste(const FunctionCallbackInfo<Value>& args) {
	Isolate *isolate = args.GetIsolate();

	v8::String::Utf8Value name(args[0]->ToString());
	std::string str_name = std::string(*name);
	SayNamaste sn(str_name);

	args.GetReturnValue().Set(String::NewFromUtf8(isolate, sn.say()));
}

void init(Local<Object> exports) {
	NODE_SET_METHOD(exports, "sayNamaste", wrapperSayNamaste);
}

/* The entry point to initialize the namaste.node module */
NODE_MODULE(namaste, init)
