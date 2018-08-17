#include <iostream>
#include "average.h"

void wrapperAverage(const FunctionCallbackInfo<Value>& args) {
	Isolate *isolate = args.GetIsolate();
    double sum = 0;
    int count = 0;

    for (int i = 0; i < args.Length(); i++){
    	if ( args[i]->IsNumber()) {
    		sum += args[i]->NumberValue();
    		count++;
    	}
    }

	Average avg;
	Local<Number> retAvg = Number::New(isolate, avg.calcAverage(sum, count));
    args.GetReturnValue().Set(retAvg);
}

void init(Local<Object> exports) {
	NODE_SET_METHOD(exports, "getAverage", wrapperAverage);
}

/* The entry point to initialize the avg.node module */
NODE_MODULE(avg, init)
