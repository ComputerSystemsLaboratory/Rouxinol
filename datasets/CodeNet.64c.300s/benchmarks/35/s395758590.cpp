//
//  main.cpp
//  graph
//
//  Created by ???????????? on 2017/10/22.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, i, j, id, num, node;
    scanf("%d", &n);
    int A[n][n];
    
    //initialize with 0
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            A[i][j] = 0;
        }
    }
    
    for (i = 0; i < n; i++){
        scanf("%d", &id);
        scanf("%d", &num);
        for(j = 0; j < num; j++){
            scanf("%d", &node);
            A[id-1][node-1] = 1;
        }
    }
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j) cout << " ";
            cout<<A[i][j];
        }
        cout<<endl;
    }
    
//    std::cout << "Hello, World!\n";
    return 0;
}