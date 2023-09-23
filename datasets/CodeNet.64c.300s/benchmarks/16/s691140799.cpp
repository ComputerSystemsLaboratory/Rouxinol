//
//  ALDS1_1_D.cpp
//  
//
//  Created by mk on 2015/11/22.
//
//

#include <stdio.h>
#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    
    long min_value = 10000000000;
    long max_benefit = -1;
    long min_benefit = -10000000000;
    long value;
    long benefit;
    int plus_flg = 0;
    for (int i=0; i<n; i++) {
        cin >> value;
        if (value < min_value) {
            
            if (min_benefit < value - min_value) {
                min_benefit = value - min_value;
            }
            min_value = value;
        }else{
            benefit = value - min_value;
            if (benefit > max_benefit) {
                max_benefit = benefit;
            }
            plus_flg = 1;
        }
    }
    if (plus_flg == 0) {
        max_benefit = min_benefit;
    }
    cout << max_benefit <<endl;
    return 0;

}