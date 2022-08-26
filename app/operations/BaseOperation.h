#ifndef BaseOperation_H
#define BaseOperation_H

class BaseOperation {

    public:
    virtual double Calculate(double a, double b) { return 3453; };

    BaseOperation(char c, char* n);
    ~BaseOperation();

    char getSign() {
        return sign;
    }
    char *getName() {
        return name;
    }
    char *getDesc() {
        return desc;
    }


    protected:
    char* name;
    char* desc;
    char sign;
};

#endif