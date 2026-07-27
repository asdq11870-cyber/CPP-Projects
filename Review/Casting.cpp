#include <iostream>
#include <cstdint>

void printString(char* string){
    std::cout << string << std::endl;
}

int main(){
    int c = 'A';
    std::cout << c << std::endl;
    std::cout << static_cast<char>(c) << std::endl;
    // Performs compile time conversions on related types

    const char* d = "Hello, World!";
    printString(const_cast<char*>(d));
    // Converts a constant (or volatile) thing to a non constant (or volatile) thing

    int number = 65;
    int* ptr = &number;
    char* chatPtr = reinterpret_cast<char*>(ptr);
    std::cout << *chatPtr << std::endl;

    auto address = reinterpret_cast<std::uintptr_t>(ptr);
    std::cout << address << std::endl;
    // Performs compile time conversions on non-related types
    
    return 0;
}