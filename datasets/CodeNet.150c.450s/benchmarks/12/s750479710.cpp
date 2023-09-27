//
//  main.cpp
//  complete_binary_tree
//
//  Created by ???????????? on 2017/10/16.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int n;

void print(int A[]){
    int idx;
    for(int i = 1; i <= n; i++){
        cout <<"node "<<i<<": ";
        cout <<"key = "<<A[i]<<", ";
        if(i/2 >= 1){
            idx = i/2;
            cout <<"parent key = "<<A[idx]<<", ";
        }
        if(i*2<=n){
            idx = 2*i;
            cout <<"left key = "<<A[idx]<<", ";
        }
        if(i*2+1 <=n){
            idx = 2*i+1;
            cout <<"right key = "<<A[idx]<<", ";
        }
        cout <<endl;
        
    }
}

int main(int argc, const char * argv[]) {
    int i;
    scanf("%d", &n);
    int A[n+1];
    for(i = 1; i <= n; i++){
        scanf("%d", &A[i]);
    }
    
    print(A);

    return 0;
}