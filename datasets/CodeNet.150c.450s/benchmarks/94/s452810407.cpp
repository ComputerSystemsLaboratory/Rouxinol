//
//  ALDS1_2_A.cpp
//  
//
//  Created by mk on 2015/11/23.
//
//

#include <stdio.h>
#include <iostream>
using namespace::std;

void bubbleSort(int* A, int N){
    int flag = 1;
    int cnt = 0;
    while (flag) {
        flag = 0;
        for (int j = N-1; j > 0; j--) {
            if (A[j] < A[j-1]) {
                int temp = A[j];
                A[j] = A[j-1];
                A[j-1] = temp;
                flag = 1;
                cnt++;
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        cout << A[i];
        if(i != N-1){
            cout << " ";
        }
    }
    cout << "\n";
    cout << cnt;
    cout << endl;
}


int main(int argc, const char * argv[]) {
    int n;
    int A[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    bubbleSort(A, n);
    
    return 0;
}