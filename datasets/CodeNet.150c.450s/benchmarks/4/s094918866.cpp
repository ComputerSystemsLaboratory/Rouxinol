//
//  main.cpp
//  ITP1_7-A
//
//  Created by Saicj on 2015/07/14.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[])
{

    //m???f???r
    int m,f,r;
    
    while (true) {
        
        cin >> m >> f >> r;
        
        if (m == -1 && f == -1 && r == -1){
            break;
        }
        
        if (m == -1 || f == -1){
            printf("F");
             printf("\n");
            continue;
        }
        
        if (m + f >= 80) {
            printf("A");
        }else if(m + f < 80 && m + f >= 65) {
            printf("B");
            
        }else if (m + f < 65 && m + f >= 50) {
            printf("C");
        }else if (m + f < 50 && m + f >= 30) {
            
            if(r >= 50){
                printf("C");
            }else{
                printf("D");
            }
        }else if (m + f < 30 ){
            printf("F");
        }
        
        printf("\n");
    }
    

    
    return 0;
}