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
    //    1  2  3  4  5  6
    
    vector<int> oginPostions;
    
    vector<int> positions;
    
    enum MOVE{
        
        E = 0,
        S,
        W,
        N
    };
    
    void Move_E(){ //???
        
        positions = oginPostions;
        
        int temp1 = positions[0];
        int temp2 = positions[5];
        
        positions[0] = positions[3];
        positions[5] = positions[2];
        
        positions[3] = temp2;
        positions[2] = temp1;
        
    }
    
    void Move_N(){ //???
        
        positions = oginPostions;
        
        int temp1 = positions[0];
        int temp2 = positions[5];
        
        positions[0] = positions[1];
        positions[5] = positions[4];
        
        positions[4] = temp1;
        positions[1] = temp2;
        
    }
    
    void Move_S(){ //???
        
        positions = oginPostions;
        
        int temp1 = positions[0];
        int temp2 = positions[5];
        
        positions[0] = positions[4];
        positions[5] = positions[1];
        
        positions[4] = temp2;
        positions[1] = temp1;
        
        
    }
    
    void Move_W(){ //???
        
        positions = oginPostions;
        
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
        
        dice.oginPostions.push_back(temp);
        
    }

    int quzCount;
    cin >> quzCount;
    
    for (int i = 0; i < quzCount; i++) {
        
        int up, positive;
        
        cin >> up >> positive;
        
        //  {?????????????????????????????????}
        //    0  1  2  3  4  5

        int index_up = 0;
        int index_pos = 0;
        
        for (int i = 0 ; i < 6; ++i){
            
            if (dice.oginPostions[i] == up) {
                index_up = i;
            }else if (dice.oginPostions[i] == positive){
                index_pos = i;
            }
        }
        
        //------ 0 --------//
        
        if (index_up == 0 && index_pos == 1) {
            
            cout << dice.oginPostions[2] << endl;
            
        }else if (index_up == 0 && index_pos == 2){
            
            cout << dice.oginPostions[4] << endl;
            
        }else if (index_up == 0 && index_pos == 3){
            
            cout << dice.oginPostions[1] << endl;
            
        }else if (index_up == 0 && index_pos == 4){
            
            cout << dice.oginPostions[3] << endl;
        }
        
        
        if (index_up == 1 && index_pos == 0) {
            
            cout << dice.oginPostions[3] << endl;
            
        }else if (index_up == 2 && index_pos == 0){
            
            cout << dice.oginPostions[1] << endl;
            
        }else if (index_up == 3 && index_pos == 0){
            
            cout << dice.oginPostions[4] << endl;
            
        }else if (index_up == 4 && index_pos == 0){
            
            cout << dice.oginPostions[2] << endl;
        }
        
        //----5-----//
        
        if (index_up == 5 && index_pos == 1) {
            
            cout << dice.oginPostions[3] << endl;
            
        }else if (index_up == 5 && index_pos == 2){
            
            cout << dice.oginPostions[1] << endl;
            
        }else if (index_up == 5 && index_pos == 3){
            
            cout << dice.oginPostions[4] << endl;
            
        }else if (index_up == 5 && index_pos == 4){
            
            cout << dice.oginPostions[2] << endl;
            
        }
        
        if (index_up == 1 && index_pos == 5) {
            
            cout << dice.oginPostions[2] << endl;
            
        }else if (index_up == 2 && index_pos == 5){
            
            cout << dice.oginPostions[4] << endl;
            
        }else if (index_up == 3 && index_pos == 5){
            
            cout << dice.oginPostions[1] << endl;
            
        }else if (index_up == 4 && index_pos == 5){
            
            cout << dice.oginPostions[3] << endl;
        }
        
        
        //  {?????????????????????????????????}
        //    1  2  3  4  5  6
        if (index_up == 1 && index_pos == 2){
            
            cout << dice.oginPostions[0] << endl;
            
        }else if (index_up == 2 && index_pos == 4){
            
            cout << dice.oginPostions[0] << endl;
            
        }else if (index_up == 4 && index_pos == 3){
            
            cout << dice.oginPostions[0] << endl;
            
        }else if (index_up == 3 && index_pos == 1){
            
            cout << dice.oginPostions[0] << endl;
        }
        
        
        if (index_up == 2 && index_pos == 1){

            cout << dice.oginPostions[5] << endl;
            
        }else if (index_up == 4 && index_pos == 2){
            
            cout << dice.oginPostions[5] << endl;
            
        }else if (index_up == 3 && index_pos == 4){
            
            cout << dice.oginPostions[5] << endl;
            
        }else if (index_up == 1 && index_pos == 3){
            
            cout << dice.oginPostions[5] << endl;
        }
    }
    
    return 0;
}