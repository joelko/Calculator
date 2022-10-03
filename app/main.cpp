#include <iostream>

#include "operations/Operators.h"
#include "Interpretor.h"


int main(int argc, char *argv[]) {
    Operators o;
    Interpretor i(&o);
    /*
    double a = 10;
    double b = 5;

    o.SetValues(a, b);

    /**
     * o.SetValues a ja b
     * o.result ja laskumerkki (niinku + tai -) palauttaa double arvon o.SetValues arvoista
     * 
     * valueitten syötön vois kans muuttaa tonne .result functioon :thinking:
     */
/*
    if (o.exists('+'))
        std::cout << a << " + " << b << " = " << o.result('+') << std::endl;
    if (o.exists('-'))
        std::cout << a << " - " << b << " = " << o.result('-') << std::endl;
    if (o.exists('*'))
        std::cout << a << " * " << b << " = " << o.result('*') << std::endl;
    if (o.exists('/'))
        std::cout << a << " / " << b << " = " << o.result('/') << std::endl;

    std::cout << "Write your equation" << std::endl;
    std::string equation;
    std::cin >> equation;
    */
    

    std::cout << i.readString("asd(asd  1000+1") << std::endl;


    return 0;
} 