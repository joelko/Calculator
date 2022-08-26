#include "BaseOperation.h"

class Divide : public BaseOperation {
    using BaseOperation::BaseOperation;

    public:
    virtual double Calculate(double a, double b) {
        return a / b;
    }
};