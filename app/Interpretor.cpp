#include "Interpretor.h"
#include <string>

Interpretor::Interpretor(Operators *o_) : o(o_){

}

double Interpretor::readString(std::string eq){
    double temp;
    double temp2;
    int cursor;
    char c;
    for (int i = 0; i<eq.length(); i++){
        if(eq.at(i)=='('){
            
        }else if(isdigit(eq.at(i))){
            cursor = i;
            for(i; i<eq.length(); i++){
                if(!isdigit(eq.at(i))){    
                    std::string tempStr = eq.substr(cursor,i - cursor);
                    temp = std::stod(tempStr);
                }
                
            }
        }else if(o->exists(eq.at(i))){
            c = eq.at(i);
        }
    }
    
    o->setValues(temp, 1);
    return o->result(c);
}