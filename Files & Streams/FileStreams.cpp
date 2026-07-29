#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream ifile{"text.txt"};
    if(ifile){
        std::string text{""};
        while(ifile >> text){
            std::cout << text << " ";
        }
        std::cout << std::endl;
        ifile.close();
    }
    return 0;
}