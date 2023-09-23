//
//  ALDS1_2_B.cpp
//  
//
//  Created by mk on 2015/11/23.
//
//

#include <stdio.h>
#include <iostream>
using namespace::std;

void selectionSort(int A[], int N){
    int flag = 0;
    int cnt = 0;
    int minj;
    for (int i=0; i<N; i++) {
        minj = i;
        flag = 0;
        for (int j=i; j<N; j++) {
            if (A[minj] > A[j]) {
                minj = j;
                flag = 1;
            }

        }
        if (flag)cnt++;
        
        swap(A[minj], A[i]);
    }
    

    
    for (int i = 0; i < N; i++) {
        cout << A[i];
        if(i != N-1){
            cout << " ";
        }
    }
    cout << endl;
    cout << cnt;
    cout << endl;
}


int main(int argc, const char * argv[]) {
    int n;
    int A[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    selectionSort(A, n);
    
    return 0;
}