//
//  main.cpp
//  Test
//
//  Created by Nag on 2017/08/18.
//  Copyright ?? 2017??´ Nag. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <vector>
#include <sstream>
#include <string>
#include <cstdio>

using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    
    int a[n][m];
    int b[m];
    int c[n];

    int i, j, k;
    
    //input a
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    
    //input b
    for(i=0; i<m; i++) {
        cin >> b[i];
    }
    
    //initialize c
    for(i=0; i<n; i++) {
            c[i] = 0;
    }
    
//    //test display
//    for(i=0; i<n; i++) {
//        for(j=0; j<m; j++) {
//            cout << a[i][j] << " ";
//        }
//        cout << endl;
//    }
//    
//    for(i=0; i<m; i++) {
//        cout <<  b[i] << endl;
//    }
    

    //calculation
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            c[i] += a[i][j]*b[j];
        }
    }
    
    //display c
    for(i=0; i<n; i++) {
        cout << c[i] << endl;
    }
    
    return 0;
}