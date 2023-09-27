//
//  main.cpp
//  ITP1_4-C
//
//  Created by Saicj on 2015/07/14.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[])
{

    int a,b;
    string op;
    
    while (true) {
        
    cin >> a >> op >> b;
    
        int result;
        
    if (op == "+"){
        
        result = a + b;
    }else if (op == "-"){
        result = a - b;
    }else if (op == "*"){
        result = a * b;
    }else if (op == "/"){
        result = a / b;
    }else{
        break;
    }
        
        printf("%d\n", result);
    }
    
    return 0;
}