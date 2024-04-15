//
//  main.cpp
//  PegSolitaireSolver
//
//  Created by Bruce Ning on 4/14/24.
//

#include <iostream>
#include "SolitaireSolver.hpp"
#include <vector>
#include <algorithm>
#include <functional>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    Board myboard;
    myboard.readFrom("beginningBoards/german.txt");
    myboard.drawBoard();
    return 0;
}
