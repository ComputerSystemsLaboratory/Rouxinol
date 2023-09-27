//
//  ITP1_2.cpp
//  
//
//  Created by anthony on 2015/06/15.
//
//

#include <stdio.h>
#include <iostream>
#define rep(i,n) for(int i=0;i<(n);i++)
#define ALL(A) A.begin(), A.end()
using namespace std;

int main(){
    int a, b;
    int sum, seki;
    cin >> a >> b;
    sum = 2 * a + 2 * b;
    seki = a * b;
    cout << seki << " "<< sum << endl;
    return 0;
}