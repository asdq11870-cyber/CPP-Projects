#include "GameofLife.h"
#include <iostream>
#include <random>
#include <thread>
#include <chrono>

using namespace std::chrono;

GameofLife::GameofLife(int rows, int cols):rows(rows), cols(cols), grid(rows, std::vector<bool>(cols,false)){}

void GameofLife::initialise(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::bernoulli_distribution d(0.5);
    for(int k = 0; k < rows; k++){
        for(int l = 0; l < cols; l++){
            grid.at(k).at(l) = d(gen);
        }
    }
}
void GameofLife::printBoard() const{
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(grid.at(i).at(j)) std::cout << "O ";
            else std::cout << "X ";
        }
        std::cout << '\n';
    }
}
int GameofLife::countNeighbours(int row, int col) const{
    int count = 0;
    for(int dr = -1; dr <= 1; dr++){
        for(int dc = -1; dc <= 1; dc++){
            if(dr == 0 && dc == 0) continue;
            int checkingrow = row + dr;
            int checkingcol = col + dc;
            if(checkingrow >= 0 && checkingrow < rows && checkingcol >= 0 && checkingcol < cols){
                if(isAlive(checkingrow, checkingcol)) count++;
            }
        }
    }
    return count;
}
void GameofLife::update(){
    std::vector<std::vector<bool>> newGrid = grid;
    for(int a = 0; a < rows; a++){
        for(int b = 0; b < cols; b++){
            int alive_neighbours = countNeighbours(a,b);
            if(isAlive(a,b) && alive_neighbours < 2) newGrid.at(a).at(b) = false;
            if(isAlive(a,b) && alive_neighbours >= 2 && alive_neighbours <= 3) continue;
            if(isAlive(a,b) && alive_neighbours >= 4) newGrid.at(a).at(b) = false;
            if(!(isAlive(a,b)) && alive_neighbours == 3) newGrid.at(a).at(b) = true;
            if(!(isAlive(a,b)) && alive_neighbours != 3) newGrid.at(a).at(b) = false;
            
        }
    }
    grid = newGrid;
}
bool GameofLife::isAlive(int row, int col) const{
    return grid.at(row).at(col);
}
int main(){
    GameofLife game = GameofLife(8,8);
    game.initialise();
    for(int epoch = 0; epoch < 5; epoch++){
        game.printBoard();
        std::cout << "\n\n";
        std::this_thread::sleep_for(seconds(2));
        game.update();
    }
    game.printBoard();
    return 0;
}