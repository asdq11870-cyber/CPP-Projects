#include <iostream>
#include <vector>

int main(){
    std::vector<int> vec{1,2,3,4,5,6,7,8,9};
    std::cout << "Iterator" << std::endl;
    for(auto it = vec.begin(); it < vec.end(); it++){
        *it += 2;
        std::cout << *it << ", ";
    }
    std::cout << '\n';
    // For iterating through a vector, list or string etc

    std::cout << "Const Iterator" << std::endl;
    for(auto it = vec.cbegin(); it < vec.cend(); it++){
        std::cout << *it << ", ";
    }
    std::cout << '\n';
    // For iterating through a vector, list or string etc without accidently changing anything

    std::cout << "Reverse Iterator" << std::endl;
    for(auto it = vec.rbegin(); it < vec.rend(); it++){
        *it += 2;
        std::cout << *it << ", ";
    }
    std::cout << '\n';
    // For iterating through a vector, list or string etc in reverse

    std::cout << "Const Reverse Iterator" << std::endl;
    for(auto it = vec.crbegin(); it < vec.crend(); it++){
        std::cout << *it << ", ";
    }
    std::cout << '\n';
    // For iterating through a vector, list or string etc in reverse without accidently changing anything


    return 0;
}