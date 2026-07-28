#include <iostream>

int main(){
    std::string str{"for"};
    str.insert(2, "lde"); // (offset, what we are adding)
    std::cout << str << std::endl;

    std::string str2{"word"};
    auto last = end(str2) - 1;
    str2.insert(last, 'l'); // (offset, what we are adding)
    std::cout << str2 << std::endl;

    std::string str3{"ski"};
    auto last2 = end(str3);
    str3.insert(last2, 2, 'l'); // (offset, what we are adding)
    std::cout << str3 << std::endl;

    std::string str4{"hello"};
    auto first = begin(str4);
    str4.erase(first);
    std::cout << str4 << std::endl;

    auto gdx = str4.find("o");
    if(gdx != std::string::npos){
        str4.replace(gdx, 5, "Goodbye");
    }
    std::cout << str4 << std::endl;
    return 0;
}