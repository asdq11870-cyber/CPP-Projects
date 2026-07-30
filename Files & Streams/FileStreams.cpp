#include <iostream>
#include <fstream>
#include <string>
#include <vector>

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

    std::ofstream ofile{"text.txt"};
    if(ofile){
        std::vector<std::string> words{"The","quick","brown","fox","jumps","over","the","fence"};
        for(auto word : words){
            ofile << word << " ";
        }
        ofile.close();
    }
    return 0;
}