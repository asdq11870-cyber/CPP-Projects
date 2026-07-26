#include <iostream>

void print2Darray(std::string arr[][3], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << arr[i][j] << ", ";
        }
    }
}

void print1Darray(std::string* arr, int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << arr[i*cols + j] << ", ";
        }
    }
}


int main(){
    std::string names1[2][3] = {{"Evindar","Mahisha","Renay"},{"Olivia","Carlie","Oliwia"}};
    std::string names2[6] = {"Evindar","Mahisha","Renay","Olivia","Carlie","Oliwia"};
    print2Darray(names1, 2, 3);
    print1Darray(names2, 1, 6);
    return 0;
}