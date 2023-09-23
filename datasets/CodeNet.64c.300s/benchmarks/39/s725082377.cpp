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
    
    int n[50];
    int comb[50];
    int m = 0;
    while (cin >> n[m]) {
        comb[m] = 0;
        for (int i = 0; i <= 9; i++) {
            for (int j = 0; j <= 9; j++) {
                for (int k = 0; k <= 9; k++) {
                    for (int l = 0; l <= 9; l++) {
                        if (i + j + k + l == n[m]) {
                            comb[m]++;
                        }
                    }
                }
            }
        }
        m++;
    }
    
    for (int i = 0; i < m; i++) {
        printf("%d\n", comb[i]);
    }
    
    return 0;
}