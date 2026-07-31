#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

template <typename T>
std::string To_String(const T& t){
    std::ostringstream os;
    os << t;
    return os.str();
}

int main(){
    std::string this_is{"This is "};
    std::string pi{To_String(3.14159)};
    this_is += pi;
    std::cout << this_is << std::endl;

    std::ifstream ifile{"text.txt"};
    if(!ifile){
        std::cout << "Could not open file!" << std::endl;
    }
    std::string line;
    std::vector<int> numbers;
    while(std::getline(ifile, line)){
        std::istringstream is(line);
        int num;
        while(is >> num){
            numbers.push_back(num);
        }
    }
    double sum{0.0};
    for(auto n : numbers){
        sum += n;
    }
    std::cout << "The sum of the numbers inside the file is " << sum << std::endl;
    return 0;
}