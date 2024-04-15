//
//  SolitaireSolver.hpp
//  PegSolitaireSolver
//
//  Created by Bruce Ning on 4/14/24.
//

#ifndef SolitaireSolver_hpp
#define SolitaireSolver_hpp

#include <stdio.h>
#include <vector>
#include "SolitaireSolver.hpp"
#include <algorithm>
#include <functional>
#include <queue>
#include <stack>
#include <iostream>
#include <fstream>
#include <string>
class SolitaireSolver {
public:
    //constructor
    SolitaireSolver(){}
    
};

class Board{
public:
    Board(){
        boardState.resize(64); // an 8*8 board
        std::fill(boardState.begin(),boardState.end(),0);
    }
    
    int& at(int x, int y){//mutator
        return boardState[x*8+y];
    }
    
    void readFrom(std::string fileName)
    {
        std::ifstream inputFile;
        inputFile.open(fileName);
        char temp;
        int i = 0;
        while(inputFile.get(temp))
        {
            if(temp == '.')
            {
                boardState[i] = -1;
                i++;
            }
            if(temp == '*')
            {
                boardState[i] = 1;
                i++;
            }
            if(temp == 'o'){
                boardState[i] = 0;
                i++;
            }
        }
        inputFile.close();
    }
    void drawBoard() // debug use
    {
        for(int i=0; i<64; i++)
        {
            switch (boardState[i]) {
                case -1:
                    std::cout<<" .";
                    break;
                case 0:
                    std::cout<<" O";
                    break;
                case 1:
                    std::cout<<" *";
                default:
                    break;
            }
            if((i+1)%8 == 0 && i!=0)
                std::cout<<"\n";
        }
    }

private:
    std::vector<int> boardState;
    
};

#endif /* SolitaireSolver_hpp */
