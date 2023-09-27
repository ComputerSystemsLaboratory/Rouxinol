//
//  main.cpp
//  ITP1_7-D
//
//  Created by ?????¶??? on 15/8/15.
//  Copyright (c) 2015??´ ?????¶???. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[]) {

    int n,m,l;
    cin >> n >> m >> l;
    
    int a[n][m];
    int b[m][l];
    
    // input a
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            
            cin >> a[i][j];
        }
    }
    
    // input b
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cin >> b[i][j];
        }
    }
    
    
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < l; j++) {
            
            long result = 0;
            
            for (int k = 0; k < m; k++) {
                
                result += a[i][k] * b[k][j];
                
//                printf("a[%d][%d]: %d  b[%d][%d]: %d\n", i,k,a[i][k],k,j, b[k][j]);
            }
            
            if (j == l -1) {
                cout << result << endl;
            }else{
                cout << result << " ";
            }
        }
    }
    
    return 0;
}