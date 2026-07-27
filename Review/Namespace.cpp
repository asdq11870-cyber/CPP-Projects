#include <iostream>

int x{23}; // defineed in the global namespace

namespace abc{
    int x{42}; // defined in the namespace of abc
    void func(){
        std::cout << "x = " << x << std::endl; // gives 42
        std::cout << "x = " << ::x << std::endl; // gives 23
    }
}

namespace xyz{
    class Test{
    private:
        int a; int b;
    public:
        Test(int a, int b) : a(a), b(b){}
        int add(){
            return a + b;
        }
    };
}

namespace def{
    class Test{
    private:
        int a; int b;
    public:
        Test(int a, int b) : a(a), b(b){}
        int multiply(){
            return a * b;
        }
    };
}

using def::Test;

int main(){
    abc::func();
    std::cout << abc::x << std::endl;
    std::cout << x << std::endl;
    Test test = Test(3,2);
    std::cout << test.multiply() << std::endl;
}