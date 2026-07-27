#include <iostream>

int func(){return 5;}
int main(){
    const int& x{6};
    auto y = x;
    y++;
    std::cout << y;
    // The auto keyword only carries the type not the const or reference that must be specified.
    // e.g. const auto& y = x;
    auto h = func();
    // h becomes an int
    std::cout << h;
    return 0;
}