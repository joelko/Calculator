#ifndef Operations_h
#define Operations_h

#include <vector>
#include <memory>

#include "BaseOperation.h"

class Operators {
    public:
    bool exists(char c);
    bool exists(char *c);
    double result(char c);
    void SetValues(double a, double b);

    Operators();
    ~Operators();

    private:
    std::vector<std::unique_ptr<BaseOperation>> operators;

    double _a;
    double _b;
};

#endif