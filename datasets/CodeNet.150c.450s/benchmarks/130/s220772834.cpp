//
//  main.cpp
//  ITP1_6-D
//
//  Created by ?????¶??? on 15/8/14.
//  Copyright (c) 2015??´ ?????¶???. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[]) {

    int n,m;
    
//    cout << "input n , m" << endl;
    cin >> n >> m;
    
//    vector<vector<int>> a (n, vector<int>(m));
    
    int a [n][m];
    
//    vector<int> b (m);
    
    int b [m];
    
    // a?????\???
//    cout << "input a" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            
            cin >> a[i][j];
        }
    }
    
    // b?????\???
//    cout << "input b" << endl;
    for (int j = 0; j < m; ++j) {
        cin >> b[j];
    }
    
    for (int i = 0; i < n; ++i) {
        
        int result = 0;
        
        for (int j = 0; j < m; ++j) {
            
            result += a[i][j] * b[j];
        }
        
        cout << result << endl;
    }

    
    return 0;
}