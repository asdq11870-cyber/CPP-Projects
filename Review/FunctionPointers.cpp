#include <iostream>

void func(int x, int y){
    std::cout << x << " + " << y << " = " << x+y << std::endl;
}

using pfunc = void (*)(int, int);

void some_func(int x, int y, pfunc func_ptr){
    (*func_ptr)(x,y);
}

pfunc other_func(){
    return &func;
}

int main(){
    auto func_ptr = &func;
    (*func_ptr)(1,2);
    auto func_ptr2 = other_func();
    some_func(1,2,func_ptr2);
    return 0;
}