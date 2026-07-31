#include <iostream>
#include <iomanip>

int main(){
    // A sticky manipulator changes the formatting of the streams and the change persists untils manually changed
    std::cout << std::hex;
    std::cout << 255 << std::endl;
    std::cout << 10 << std::endl;
    std::cout << std::dec;
    std::cout << std::endl;

    // A non-sticky manipulator changes the formatting of the streams for only the next output
    // This is for formatting a table of results
    std::cout << std::left << std::setw(15) << "Penguins" << 5 << std::endl;
    std::cout << std::setw(15) << "Kangaroos" << 2 << std::endl;
    std::cout << std::setw(15) << "Lions" << 7 << std::endl;
    std::cout << std::setw(15) << "Tigers" << 5 << std::endl;
    std::cout << std::setw(15) << "Giraffes" << 5 << std::endl;
    return 0;
}