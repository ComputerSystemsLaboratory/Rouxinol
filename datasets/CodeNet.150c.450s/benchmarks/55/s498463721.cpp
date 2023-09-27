//
//  main.cpp
//  ITP1_8-B
//
//  Created by Saicj on 2015/07/15.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[])
{
    char num[1001];
    
    while (1) {
        
        scanf("%s", num);
        
        if (*num == '0') {
            break;
        }
        
        int result = 0;
        
        for (int i = 0; i < 1000; i ++) {
            
            int temp = num[i] - '0';
            
            if (temp < 0 || temp > 9){
                break;
            }
            
            result += temp;
            
            
        }
        
        printf("%d\n", result);
    }
    
//    printf("\n");
    
    return 0;
}