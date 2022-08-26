#include <iostream>

#include "operations/Operators.h"


int main(int argc, char *argv[]) {
    Operators o;

    double a = 10;
    double b = 5;

    o.SetValues(a, b);

    /**
     * o.SetValues a ja b
     * o.result ja laskumerkki (niinku + tai -) palauttaa double arvon o.SetValues arvoista
     * 
     * valueitten syötön vois kans muuttaa tonne .result functioon :thinking:
     */

    if (o.exists('+'))
        std::cout << a << " + " << b << " = " << o.result('+') << std::endl;
    if (o.exists('-'))
        std::cout << a << " - " << b << " = " << o.result('-') << std::endl;
    if (o.exists('*'))
        std::cout << a << " * " << b << " = " << o.result('*') << std::endl;
    if (o.exists('/'))
        std::cout << a << " / " << b << " = " << o.result('/') << std::endl;

    return 0;
} 