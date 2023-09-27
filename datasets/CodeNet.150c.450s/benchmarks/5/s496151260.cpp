//
//  main.cpp
//  ITP1_6-A
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
    int index = 0;
    cin >> n;
    
    int numList[n];
    
    while (true) {
        int temp;
        
        cin >> temp;
        numList[index] = temp;
        index++;
        
        if (index >= n){
            break;
        }
    }
    
    for (int i = index-1; i >= 0; i--) {
        
        if (i == 0){
            printf("%d",numList[0]);
            break;
        }
        
        printf("%d ",numList[i]);
    }
    
    printf("\n");
    
    
    return 0;
}