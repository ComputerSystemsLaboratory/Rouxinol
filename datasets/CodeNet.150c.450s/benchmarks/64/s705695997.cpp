//
//  main.cpp
//  exhaustive_serach
//
//  Created by ???????????? on 2017/10/07.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int n, A[50];

bool solve(int i, int m){
    if(m == 0){
        return true;
    }
    if(i >= n){
        return false;
    }
    bool res = solve(i+1, m) || solve(i+1, m - A[i]);
    return res;
}


int main(int argc, const char * argv[]) {
    int i, q, m;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    scanf("%d", &q);
    for(i = 0; i < q; i++){
        scanf("%d", &m);
        bool is_solve = solve(0, m);
        if(is_solve) cout << "yes" <<endl;
        else cout << "no" <<endl;
        
    }
//    std::cout << "Hello, World!\n";
    return 0;
}