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
    
    long n = 0;
    cin >> n;
    
    long rest = 100000;
    for (int i = 0; i < n; i++) {
        rest *= 1.05;
        if(rest % 1000 != 0){
            rest = rest + 1000 -  rest % 1000;
        }
    }
    
    
    
    printf("%ld\n", rest);
    
    return 0;
}