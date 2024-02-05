//Created by Filiz Ipek Oktay on 27.10.2023.
//CS300-Homework1

#include <iostream>
#include <vector>
#include "stackClass.h"
using namespace std;

struct info {
    std::vector<int> coord;
    std::vector<int> direc;

    info() {
        coord = vector<int>(2, 0);
        direc = vector<int>(4, 1);
    }
};



int main() {
    Stack<info> maze;
    int mazeNum, mazeRow, mazeCol, mazeID, entX, entY, exX, exY, visitedBlocks;

    cout << "Enter the number of mazes: \n";
    cin >> mazeNum;

    cout << "Enter the number of rows and columns (M and N): \n";
    cin >> mazeRow ;




    return 0;
}

