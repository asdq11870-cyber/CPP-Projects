#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

template<typename T>
std::string To_String(const T& t){
    std::ostringstream os;
    os << t;
    return os.str();
}

struct Languages{
    std::string lang;
    std::string designer;
    std::string year;
};

int main(){
    std::ifstream ifile{"languages.txt"};
    if(!ifile){
        std::cerr << "Something Went Wrong!" << std::endl;
        return -1;
    }
    std::string line;
    std::vector<Languages> vec;
    while(std::getline(ifile, line)){
        std::string lang;
        std::string designer;
        int year;
        std::istringstream is(line);
        if(is >> lang >> designer >> year){
            Languages templang = {.lang = lang, .designer = designer, .year = To_String(year)};
            vec.push_back(templang);
        }
    }
    for(auto v : vec){
        std::cout << v.lang << ", " << v.designer << ", " << v.year << std::endl;
    }
    return 0;
}