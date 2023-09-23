//
//  main.cpp
//  fibonacci_number
//
//  Created by ???????????? on 2017/10/17.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    int A[n];
    A[0]=A[1]=1;
    for(int i = 2; i <= n; i++ ){
        A[i] = A[i-2]+A[i-1];
    }
    cout << A[n] <<endl;;
    return 0;
}