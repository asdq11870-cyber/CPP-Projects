#include <iostream>
#include <fstream>

int main(){

    std::ofstream ofile{"text.txt"};

    for(int i = 0; i < 1'000; i++){
        ofile << i << '\n';
        if(i == 666) return 0;
    }

    std::cout << "Enter some text: \n";
    char c;
    while(std::cin.get(c)){
        std::cout.put(c);
    }

    const int size{30};
    char buffer[size];
    std::ifstream ifile("text.txt");
    if(!ifile){
        std::cout << "Something went wrong!";
        return -1;
    }

    ifile.read(buffer, size);
    auto nread = ifile.gcount();
    ifile.close();

    std::cout << "The number of bytes from this file is " << nread << std::endl;
    std::cout << "File contents: " << std::endl;
    std::cout.write(buffer, size);
    std::cout << std::endl;
    
    
    
    return 0;
}