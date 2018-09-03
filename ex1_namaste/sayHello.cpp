#include <iostream>
#include <string>
#include "sayHello.h"

using namespace std;

SayHello::SayHello(string name): name(name) {}

const char* SayHello::say() {
    string hello = "Hello " + name;
    return hello.c_str();
}
