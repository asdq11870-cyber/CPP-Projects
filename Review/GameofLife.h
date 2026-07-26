#ifndef GAMEOFLIFE_H
#define GAMEOFLIFE_H

#include <vector>
class GameofLife{
private:
    int rows;
    int cols;
    std::vector<std::vector<bool>> grid;

public:
    GameofLife(int rows, int cols);
    void initialise();
    void printBoard() const;
    int countNeighbours(int row, int col) const;
    void update();
    bool isAlive(int row, int col) const;
};

#endif