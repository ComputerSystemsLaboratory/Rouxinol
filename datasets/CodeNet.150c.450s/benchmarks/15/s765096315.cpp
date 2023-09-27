//
//  main.cpp
//  ALDS1_4_A
//
//  Created by ptyuan on 2018/10/22.
//  Copyright © 2018 YY. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int linearSearch(int *array, int n, int key) {
    *(array + n ) = key;
    int i = 0;
    while (array[i] != key) {
        i++;
    }
    return i == n ? -1 : i;
}

int main(int argc, const char * argv[]) {
    int n = 0;
    int S[10000 + 1] = {0};
    int q = 0;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", S + i);
    }
    
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        int key = 0;
        scanf("%d", &key);
        if (-1 != linearSearch(S, n, key)) {
            sum++;
        }
    }
    printf("%d\n", sum);
    
    return 0;
}

