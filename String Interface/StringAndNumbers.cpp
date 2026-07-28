#include <iostream>
#include <string>

int main(){
    std::string hello{"hello"};
    std::string pi{std::to_string(3.14159)};
    hello = hello + " " + pi;
    std::cout << hello << std::endl;
    return 0;
}