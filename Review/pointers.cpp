#include <iostream>

int main(){
    int i{1};
    int* p1 = &i;

    std::cout << "p1 = " << p1 << "\n"; // gives the memory address
    std::cout << "p1 = " << *p1 << "\n"; // gives 1

    int* p2 = new int;
    int* p3 = new int{32};

    std::cout << "p2 = " << p2 << "\n";// gives the memory address
    std::cout << "p2 = " << *p2 << "\n"; // gives a garbage value

    std::cout << "p3 = " << p3 << "\n";// gives the memory address
    std::cout << "p3 = " << *p3 << "\n"; // gives 32

    delete p3;
    p3 = nullptr;
    //std::cout << "p3 = " << *p3 << "\n"; // will print out nothing

    int *pa = new int[20];
    for(int i = 0; i < 20; i++){
        pa[i] = i;
    }
    delete pa;
    for(int j = 0; j < 20; j++){
        std::cout << pa[j] << ", ";
    }
    return 0;
}