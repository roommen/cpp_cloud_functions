#include <iostream>
#include <string>
#include "sayNamaste.h"

using namespace std;

SayNamaste::SayNamaste(string _str): str(_str) {}

const char* SayNamaste::say() {
    string namasteStr = "Namaste " + str;
    return namasteStr.c_str();
}
