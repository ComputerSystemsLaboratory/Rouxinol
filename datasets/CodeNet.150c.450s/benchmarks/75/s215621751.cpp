#include <iostream>
#include <stdio.h>

#define MAX 1000000

int n, H[MAX];

void maxHeap(int i) {
    int left = i * 2;
    int right = i * 2 + 1;
    
    if (left > n) return;
    
    int max = left;
    if (right <= n) max = H[left] >= H[right] ? left : right;
    max = H[i] >= H[max] ? i : max;
    
    if (max != i) {
        std::swap(H[i], H[max]);
        maxHeap(max);
    }
}

int main() {
    int key;
    
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &key);
        H[i] = key;
    }
    
    for (int i = n/2; i >= 1; i--) {
        maxHeap(i);
    }
    
    for (int i = 1; i <= n; i++) {
        printf(" %d", H[i]);
    }
    printf("\n");
    
    return 0;
}

