//
//  main.cpp
//  ITP1_6_B
//
//  Created by Saicj on 2015/07/14.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    
    int n;
    
    string color = "";
    int cartNum = 0;
    
    bool cartInit[4][13] = {};
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        
        int index = 0;
        
        cin >> color >> cartNum;
        
        if (color == "S"){
            index = 0;
        }else if (color == "H"){
            index = 1;
        }else if (color == "C"){
            index = 2;
        }else if (color == "D"){
            index = 3;
        }

        cartInit[index][cartNum-1] = true;
        
    }
    
    //??¨???
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            
            // ????????????????????¨???
            if (!cartInit[i][j]) {

                if (i == 0) {
                    printf("%s %d","S",j+1);
                }else if (i == 1){
                    printf("%s %d","H",j+1);
                }else if (i == 2){
                    printf("%s %d","C",j+1);
                }else if (i == 3){
                    printf("%s %d","D",j+1);
                }
                
                printf("\n");
                
            }
        }
    }
    
    return 0;
}