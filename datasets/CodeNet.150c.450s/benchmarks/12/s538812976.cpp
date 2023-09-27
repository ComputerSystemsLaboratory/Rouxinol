#include<iostream>
#include<stdio.h>
using namespace std;


int parent(int i) {
    return i / 2;
}

int left(int i) {
    return 2 * i;
}
int right(int i) {
    return 2 * i + 1;
}

int main() {
    int n, A[100001];;
    cin >> n;
    
    for (int j = 1; j <= n; j++) scanf("%d", &A[j]);
    
    for (int j = 1; j <= n; j++) {
        printf("node %d: key = %d, ", j , A[j]);
        if (parent(j) >= 1) printf("parent key = %d, ", A[parent(j)]);
        if (left(j) <= n) printf("left key = %d, ", A[left(j)]);
        if (right(j) <= n) printf("right key = %d, ", A[right(j)]);
        printf("\n");
    }
    
    return 0;
}
