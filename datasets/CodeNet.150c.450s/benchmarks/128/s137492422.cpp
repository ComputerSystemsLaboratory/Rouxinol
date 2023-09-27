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
    
    string str;
    //int n = 0;
    cin >> str;
    
    
    for(int i = (int)str.size() - 1; i >= 0; i--){
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}