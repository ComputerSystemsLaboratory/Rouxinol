//
//  main.cpp
//  ttt
//
//  Created by ??§?£? ??? on 2015/04/23.
//  Copyright (c) 2015??´ ??§?£? ???. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    while(cin >> n,n!=0){
    int max;
    int min=1005;
    int sum = 0;
    max = 0;
    int x;
    for(int i = 0;i < n;i = i+1){
        cin >> x;
        sum = sum + x;
        if(x > max){
            max = x;}
        if(x<min)
            min = x;
    }
        cout << (sum-min-max)/(n-2)<< endl;}
    return 0;
}