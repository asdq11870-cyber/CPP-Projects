#include <iostream>
#include <string>

int main(){
    std::string str{"Hello World!"};
    size_t pos = str.rfind("H");
    if(pos != std::string::npos){
        std::cout << R"(First occurence of H is at index )" << pos << std::endl;
    }
    else{
        std::cout << "Could not find H" << std::endl;
    }

    std::string vowels{"aeiou"};
    std::cout << R"(The first vowel is at index )" << str.find_first_of(vowels) << std::endl;
    std::cout << R"(The last vowel is at index )" << str.find_last_of(vowels) << std::endl;
    std::cout << R"(The first consonant is at index )" << str.find_first_not_of(vowels) << std::endl;
    std::cout << R"(The last consonant is at index )" << str.find_last_not_of(vowels) << std::endl;
    return 0;
}