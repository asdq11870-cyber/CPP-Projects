#include <iostream>
#include <vector>

void func(int i){
    std::cout << "func(int) called" << std::endl;
}

void func(int* i){
    std::cout << "func(int* ) called" << std::endl;
}

int main(){
    func(NULL);
    func(nullptr);
    return 0;
}