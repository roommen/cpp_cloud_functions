#ifndef SAY_HELLO_H
#define SAY_HELLO_H

class SayHello {
public:
    SayHello(std::string name);
    const char* say();
private:
    std::string name;
};

#endif /* SAY_HELLO_H */
