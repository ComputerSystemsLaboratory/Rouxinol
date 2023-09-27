//
//  main.cpp
//  ALDS1_5_B
//
//  Created by ptyuan on 2018/10/28.
//  Copyright © 2018 Sy. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

const int kMaxValue = 2000000000;
const int kMax = 500000;

int A[kMax] = {0};

int L[kMax / 2 + 2];
int R[kMax / 2 + 2];
int cmpCount = 0;

void _merge(int *A, int n, int left, int mid, int right) {
    int n1 = mid - left;
    for (int i = 0; i < n1; i++) {
        L[i] = A[left + i];
    }
    
    int n2 = right - mid;
    for (int i = 0; i < n2; i++) {
        R[i] = A[mid + i];
    }
    
    L[n1] = kMaxValue;
    R[n2] = kMaxValue;
    int l1 = 0;
    int l2 = 0;
    for (int k = left; k < right; k++) {
        ++cmpCount;
        if (L[l1] <= R[l2]) {
            A[k] = L[l1++];
         } else {
             A[k] = R[l2++];
         }
    }
}

void mergeSort(int *A, int n, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, n, left, mid);
        mergeSort(A, n, mid, right);
        _merge(A, n, left, mid, right);
    }
}



int main(int argc, const char * argv[]) {
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", A + i);
    }
    
    mergeSort(A, n, 0, n);
    for (int i = 0; i < n; i++) {
        int value = A[i];
        if (i > 0) {
            printf(" ");
        }
        printf("%d", value);
    }
    printf("\n");
    printf("%d\n", cmpCount);
    
    
    return 0;
}

