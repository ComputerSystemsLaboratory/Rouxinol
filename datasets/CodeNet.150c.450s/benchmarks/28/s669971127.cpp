//
//  main.cpp
//  ALDS1_4_D
//
//  Created by ptyuan on 2018/10/25.
//  Copyright © 2018 Sy. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int T[100000];
int n = 0;
int k = 0;

int check(int p) {
    int count = 0;
    for (int i = 0; i < k; i++) {
        int s = 0;
        while (s + T[count] <= p) {
            s += T[count];
            count++;
            if (count == n) {
                return n;
            }
        }
    }
    return count;
}

int main(int argc, const char * argv[]) {
    
    
    scanf("%d%d", &n, &k);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", T + i);
    }
    
    int left = 0;
    int right = 100000 * 10000;
    while (right - left > 1) {
        int middle = (right + left) / 2;
        int v = check(middle);
        if (v >= n) {
            right = middle;
        } else {
            left = middle;
        }
    }
    
    cout << right << endl;
    return 0;
}

