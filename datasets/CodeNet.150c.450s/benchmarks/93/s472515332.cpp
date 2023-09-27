//
//  main.cpp
//  QS_
//
//  Created by ptyuan on 2018/10/30.
//  Copyright © 2018 YY. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
struct Element {
    char c;
    long number;
};

void swap(Element &a, Element &b) {
    Element temp = a;
    a = b;
    b = temp;
}


int partition(Element *A, int p, int r) {
    Element x = A[r];
    int i = p - 1;
    for (int j = p; j <= r - 1; j++) {
        if (A[j].number <= x.number) {
            i++;
            Element temp = A[j];
            A[j] = A[i];
            A[i] = temp;
        }
    }
    A[r] = A[i + 1];
    A[i + 1] = x;
    return i + 1;
}


void qs(Element *A, int left, int right) {
    if (left < right) {
        int mid = partition(A, left, right);
        qs(A, left, mid - 1);
        qs(A, mid + 1, right);
    }
}

const long kMaxValue = 10000000000;
const int kMax = 1000000;


Element L[kMax / 2 + 2];
Element R[kMax / 2 + 2];
int cmpCount = 0;

void _merge(Element *A, int n, int left, int mid, int right) {
    int n1 = mid - left;
    for (int i = 0; i < n1; i++) {
        L[i] = A[left + i];
    }
    
    int n2 = right - mid;
    for (int i = 0; i < n2; i++) {
        R[i] = A[mid + i];
    }
    Element temp;
    temp.number = kMaxValue;
    L[n1] = temp;
    R[n2] = temp;
    int l1 = 0;
    int l2 = 0;
    for (int k = left; k < right; k++) {
        ++cmpCount;
        if (L[l1].number <= R[l2].number) {
            A[k] = L[l1++];
        } else {
            A[k] = R[l2++];
        }
    }
}

void mergeSort(Element *A, int n, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, n, left, mid);
        mergeSort(A, n, mid, right);
        _merge(A, n, left, mid, right);
    }
}

bool isStable(Element *e1, Element *e2, int n) {
    for (int i = 0; i < n; i++) {
        if (e1[i].c != e2[i].c) {
            return false;
        }
    }
    return true;
}


int main(int argc, const char * argv[]) {
    Element A[100000];
    Element B[100000];
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        Element temp;
        scanf(" %c", &temp.c);
        scanf("%ld", &temp.number);
        A[i] = temp;
        B[i] = temp;
    }
    qs(A, 0, n - 1);
    mergeSort(B, n, 0, n);
    if (isStable(A, B, n)) {
        printf("Stable");
    } else {
        printf("Not stable");
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        Element temp = A[i];
        printf("%c %ld\n", temp.c, temp.number);
    }
    
    return 0;
}


