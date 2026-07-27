#include <iostream>

template <class T>
T Max(const T& t1, const T& t2){
    if(t1 > t2) return t1;
    return t2;
}

int main(){
    std::cout << Max(29.92, 13.09) << std::endl;
    std::cout << Max(19,12) << std::endl;
    std::cout << Max('A','B') << std::endl;
    return 0;
}