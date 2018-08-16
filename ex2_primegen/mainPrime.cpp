#include <iostream>
#include "prime.h"

void wrapperPrimes(const FunctionCallbackInfo<Value>& args) {
	Isolate *isolate = args.GetIsolate();
	int range = args[0]->NumberValue();

	Prime pr;
	const char* primes = pr.genPrimes(range);
	args.GetReturnValue().Set(String::NewFromUtf8(isolate, primes));
}

void init(Local<Object> exports) {
	NODE_SET_METHOD(exports, "getPrimes", wrapperPrimes);
}

/* The entry point to initialize the prime.node module */
NODE_MODULE(prime, init)
