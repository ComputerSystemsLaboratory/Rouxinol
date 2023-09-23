//
//  ALDS1_1_A.cpp
//  
//
//  Created by mk on 2015/11/23.
//
//

#include <stdio.h>
#include <iostream>
using namespace::std;

void printArray(int* A, int N){
    for (int i = 0; i < N; i++) {
        cout << A[i];
        if(i != N-1){
            cout << " ";
        }
    }
    cout << endl;
}

void insertionSort(int* A, int N){
    printArray(A, N);
    for (int i = 1; i < N; i++) {
        int v = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > v) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        printArray(A, N);
    }
}


int main(int argc, const char * argv[]) {
    int n;
    int A[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    insertionSort(A, n);
    

    return 0;
}