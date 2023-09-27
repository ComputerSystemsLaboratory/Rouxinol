//
//  main.cpp
//  ALDS1_5_A
//
//  Created by ptyuan on 2018/10/26.
//  Copyright © 2018 YY. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int n = 0;
int q = 0;
int A[50];
int m = 0;


bool solve(int *A, int i, int m) {
    if (0 == m) return true;
    if (i > n) return false;
    bool res = solve(A, i + 1, m) || solve(A, i + 1, m - A[i]);
    return res;
}


int main(int argc, const char * argv[]) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", A + i);
    }
    scanf("%d", &q);
    
    for (int i = 0; i < q; i++) {
        scanf("%d", &m);
        bool r = solve(A, 0, m);
        if (r) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    return 0;
}

