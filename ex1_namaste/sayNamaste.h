#ifndef SAY_NAMASTE_H
#define SAY_NAMASTE_H

class SayNamaste {
public:
    SayNamaste(std::string str);
    const char* say();
private:
    std::string str;
};

#endif /* SAY_NAMASTE_H */
