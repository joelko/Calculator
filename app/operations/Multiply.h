#include "BaseOperation.h"

class Multiply : public BaseOperation {
    using BaseOperation::BaseOperation;

    public:
    virtual double Calculate(double a, double b) {
        return a * b;
    }
};