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
    return 0;
}