//
//  main.cpp
//  ITP1_6-C
//
//  Created by Saicj on 2015/07/14.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[])
{

    int n;
    cin >> n;
    
    int b,f,r,v;
    
    int buildingData[4][3][10] = {};
    
    
    for (int i = 0; i < n; i++) {
        
        cin >> b >> f >> r >> v;
        
        buildingData[b-1][f-1][r-1] += v;

    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 10; k++) {

                printf(" %d", buildingData[i][j][k]);
                
            }
            printf("\n");
        }
        
        if (i == 3){
            break;
        }
        printf("####################\n");
    }
    
    return 0;
}