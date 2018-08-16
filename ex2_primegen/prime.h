#ifndef PRIME_H_
#define PRIME_H_

#include <iostream>
#include <vector>
#include <node.h>

using namespace std;
using namespace v8;

class Prime {
private:
    string name;
public:
    Prime();
    const char* genPrimes(int primeRange);
};

#endif /* PRIME_H_ */
