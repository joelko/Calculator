

#include "Operators.h"

#include "Plus.h"
#include "Minus.h"
#include "Multiply.h"
#include "Divide.h"

/**
 * @brief Construct a new Operators:: Operators object
 * 
 * List all possible operators with base type BaseOperation in a vector.
 * 
 */
Operators::Operators() {
    operators.emplace_back( new Plus ('+', (char *) "plus") );
    operators.emplace_back( new Minus ('-', (char *) "minus") );
    operators.emplace_back( new Multiply ('*', (char *) "multiply") );
    operators.emplace_back( new Divide ('/', (char *) "divide") );
}

Operators::~Operators() {

}

bool Operators::exists(char c) {
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i]->getSign() == c)
            return true;
    }

    return false;
}

bool Operators::exists(char *c) {
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i]->getName() == c)
            return true;
    }

    return false;
}

void Operators::SetValues(double a, double b) {
    _a = a;
    _b = b;
}

double Operators::result(char c) {
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i]->getSign() == c)
            return operators[i]->Calculate(_a, _b);
    }

    return operators[0]->Calculate(_a, _b);
    //return getOperation(c).Calculate();
}
