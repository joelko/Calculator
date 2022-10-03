#include <string>
#include "operations/Operators.h"

class Interpretor{
    public:
        Interpretor(Operators *o);
        double readString(std::string equation);
    private:
        Operators *o;

};