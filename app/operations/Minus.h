#include "BaseOperation.h"

class Minus : public BaseOperation {
    using BaseOperation::BaseOperation;

    public:
    virtual double Calculate(double a, double b) {
        return a - b;
    }
};