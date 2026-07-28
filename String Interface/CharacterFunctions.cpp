#include <iostream>
#include <cctype>

bool string_equal(const std::string& string1, const std::string& string2){
    if(string1.size() != string2.size()) return false;
    while(auto it != cend(string1) && auto it != cend(string2)){
        
    }
}


int main(){
    std::string hello{"Hello, World!"};
    for(auto c : hello){
        if(isupper(c)){
            std::cout << c << " is upper case\n";
        }
        if(islower(c)){
            std::cout << c << " is lower case\n";
        }
        if(ispunct(c)){
            std::cout << c << " is punctuation\n";
        }
        if(isspace(c)){
            std::cout << c << " is space\n";
        }
        
    }
    return 0;
}