#include <iostream>
#include <string>

int main(){
    std::string string{"Hello"};
    for(auto it = string.cbegin(); it != string.cend(); it++){
        switch(*it){
            case 'e': [[fallthrough]];
            case 'H': [[fallthrough]];
            case 'l': std::cout << "Hello\n";
        }
    }
    return 0;
}