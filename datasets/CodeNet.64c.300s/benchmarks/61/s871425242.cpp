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
    int r, c;
    int i, j;
    int sum;
    
    cin >> r >> c;
    
    int a[r+1][c+1];
    
    //read
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            cin >> a[i][j];
        }
    }

    //calc. row sum
    for(i=0; i<r; i++) {
        sum = 0;
        for(j=0; j<c; j++) {
            sum += a[i][j];
        }
        a[i][c] = sum;
    }
    
    //calc. column sum
    for(j=0; j<c+1; j++) {
        sum = 0;
        for(i=0; i<r; i++) {
            sum += a[i][j];
        }
        a[r][j] = sum;
    }
    
    //display
    for(i=0; i<r+1; i++) {
        for(j=0; j<c+1; j++) {
            if(j==0) cout << a[i][j];
            else cout << " " << a[i][j];
        }
        cout << endl;
    }
    
    
    return 0;
    
}