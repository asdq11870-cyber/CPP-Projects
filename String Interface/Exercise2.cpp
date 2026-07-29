#include <iostream>
#include "Exercise2.h"

void exclaim(std::string& string, char punc){
    for(auto &c : string){
        if(ispunct(c)) c = punc;
    }
}


int main(){
    std::string str{"To be, or not to be, that is the question:"};
    exclaim(str, '!');
    std::cout << str << std::endl;
    return 0;
}