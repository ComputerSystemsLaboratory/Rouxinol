//
//  main.cpp
//  ITP1_11-A
//
//  Created by ?????¶??? on 15/8/15.
//  Copyright (c) 2015??´ ?????¶???. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

struct Dice{
    
    //  {?????????????????????????????????}
    vector<int> positions;
    
    enum MOVE{
      
        E = 0,
        S,
        W,
        N
    };
    
    void Move_E(){ //???
        
        int temp1 = positions[0];
        int temp2 = positions[5];
        
        positions[0] = positions[3];
        positions[5] = positions[2];

        positions[3] = temp2;
        positions[2] = temp1;

    }
    
    void Move_N(){ //???
        
        int temp1 = positions[0];
        int temp2 = positions[5];
        
        positions[0] = positions[1];
        positions[5] = positions[4];
        
        positions[4] = temp1;
        positions[1] = temp2;

    }
    
    void Move_S(){ //???
        
        int temp1 = positions[0];
        int temp2 = positions[5];
        
        positions[0] = positions[4];
        positions[5] = positions[1];
        
        positions[4] = temp2;
        positions[1] = temp1;


    }
    
    void Move_W(){ //???
        
        int temp1 = positions[0];
        int temp2 = positions[5];
        
        positions[0] = positions[2];
        positions[5] = positions[3];
        
        positions[3] = temp1;
        positions[2] = temp2;

    }
};

int main() {

    Dice dice;
    int temp;
    
    for (int i = 0; i < 6; i ++) {
        
        cin >> temp;
        
        dice.positions.push_back(temp);
        
    }
    
//    printf("Debug Origin %d %d %d %d %d %d\n", dice.positions[0], dice.positions[1], dice.positions[2], dice.positions[3], dice.positions[4], dice.positions[5]);

    
    string moveStr;
    cin >> moveStr;
    
    for (int i = 0; i < moveStr.length(); i++) {
        
        if (moveStr[i] == 'E') {
        
            dice.Move_E();
        }else if (moveStr[i] == 'N'){
            
            dice.Move_N();
        }else if (moveStr[i] == 'S'){
            
            dice.Move_S();
        }else if (moveStr[i] == 'W'){
            
            dice.Move_W();
        }
        
//        printf("Debug %d %d %d %d %d %d\n", dice.positions[0], dice.positions[1], dice.positions[2], dice.positions[3], dice.positions[4], dice.positions[5]);
        
    }
    
    cout << dice.positions[0] << endl;
    
    return 0;
}