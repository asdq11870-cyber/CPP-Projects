#include <iostream>
#include <cctype>

bool string_equal(const std::string& string1, const std::string& string2){
    if(string1.size() != string2.size()) return false;
    auto lit = cbegin(string1);
    auto rit = cbegin(string2);
    while(lit != cend(string1) && rit != cend(string2)){
        if(toupper(*lit) != toupper(*rit)) return false;
        ++lit; ++rit;
    }
    return true;
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
    std::cout << string_equal("Hello Wrld!","Hello World!") << std::endl;
    return 0;
}