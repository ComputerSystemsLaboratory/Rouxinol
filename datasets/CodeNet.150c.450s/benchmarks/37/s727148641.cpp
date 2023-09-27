//
//  main.cpp
//  CppTest
//
//  Created by Ryu on 2017/02/08.
//  Copyright ?? 2017??´ Ryu. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    float e[10000][6];
    int n = 0;
    float x[10000], y[10000];
    while (cin >> e[n][0] >> e[n][1] >> e[n][2] >> e[n][3] >> e[n][4] >> e[n][5]) {
        float d = e[n][0] * e[n][4] - e[n][1] * e[n][3];
        x[n] = (e[n][4] * e[n][2] - e[n][1] * e[n][5]) / d;
        y[n] = (0 - e[n][3] * e[n][2] + e[n][0] * e[n][5]) / d;
        //printf("d: %f, x: %.4f, y: %.4f\n", d, x[n], y[n]);
        n++;
    }
    
    
    for(int i = 0; i < n; i++){
        if(x[i] == -0){
            x[i] = 0;
        }
        if(y[i] == -0){
            y[i] = 0;
        }
        printf("%.3f %.3f\n", x[i], y[i]);
    }
    
    
    return 0;
}