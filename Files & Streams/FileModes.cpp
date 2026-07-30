#include <iostream>
#include <fstream>
#include <limits>

int main(){

    // std::ofstream ofile;
    // ofile.open("text.txt", std::ofstream::app); //std::ofstream::append is only one of the file modes
    // if(!ofile){
    //     std::cout << "Something went wrong!";
    //     return -1;
    // }
    // ofile << " Some random text to go along with everything else";
    // ofile.close();


    // Member functions include open, good, bad and fail.
    // int x{0};
    // std::cout << "Enter an integer: ";
    // std::cin >> x;

    // if(std::cin.good()){
    //     std::cout << "The number you entered is " << x << std::endl;
    // }
    // if(std::cin.fail()){
    //     std::cout << "Try again!" << std::endl;
    // }
    // if(std::cin.bad()){
    //     std::cout << "Something is wrong!" << x << std::endl;
    // }

    // std::ifstream ifile;
    // ifile.open("text.txt");

    // char y;
    // while(!ifile.eof()){
    //     ifile >> y;
    //     std::cout << y << " ";
    // }
    // std::cout << std::endl;

    int x{0};
    std::cout << "Enter an integer: ";
    std::cin >> x;

    bool success{false};

    while(!success){
        if(std::cin.good()){
            std::cout << "The integer you entered is valid!" << std::endl;
            success = true;
        }
        else if(std::cin.fail()){
            std::cout << "This is not a valid input! Try again!" << std::endl;
            std::cin.clear();
            std::cout << "Enter an integer: ";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin >> x;
        }
    }

    return 0;
}