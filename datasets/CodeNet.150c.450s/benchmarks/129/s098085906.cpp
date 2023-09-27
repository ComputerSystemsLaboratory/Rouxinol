//
//  main.cpp
//  ITP1_7-C
//
//  Created by Saicj on 2015/07/14.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[])
{


    int r;
    int c;
    
    cin >> r >> c;
    
    int newForm[r][c];
    int resultForm[r+1][c+1];
    
    // ?????????
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            newForm[i][j] = 0;
        }
    }
    
    for (int i = 0; i < r+1; i++) {
        for (int j = 0; j < c+1; j++) {
            resultForm[i][j] = 0;
        }
    }
    
    
    // ????????\???
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            
            cin >> newForm[i][j];
            
            resultForm[i][j] = newForm[i][j];
            
            // ???????¨????
            resultForm[i][c] += newForm[i][j];
        }
        
    }
    
    
//    // ???????¨????
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            
            resultForm[r][i] += resultForm[j][i];
        }
        
    }
    
    
    // ??????????????????
    for (int i = 0;  i < c; i++) {
        resultForm[r][c] += resultForm[r][i];
    }
    
    
    
    // ??¨????????????
    for (int i = 0; i <= r ; i++) {
        for (int j = 0; j <= c; j++) {
            
            printf("%d", resultForm[i][j]);
            
            if (j == c){
                continue;
            }
            
            printf(" ");
        }
        
        printf("\n");
    }
    
    
    return 0;
}