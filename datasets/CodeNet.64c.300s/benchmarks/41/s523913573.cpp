#include <iostream>
#include <stdio.h>
#define MAX 2000000


int n, H[MAX];

void maxHeapify(int i) {
    int max_index;
    int left = i * 2;
    int right = i * 2 + 1;
    if (H[left] > H[right]) max_index = left;
    else max_index = right;
    if (H[i] < H[max_index]) {
        std::swap(H[i], H[max_index]);
        if (max_index*2 <= n || max_index*2+1 <= n) maxHeapify(max_index);
    }
}

void buildMaxHeap() {
    for (int i = n/2; i >= 1; i--) {
        maxHeapify(i);
    }
}

int main() {
    int key;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) H[i] = -1;
    
    for (int i = 1; i <= n; i++) {
        scanf("%d", &key);
        H[i] = key;
    }
    
    buildMaxHeap();
    
    for (int i = 1; i <= n; i++) {
        printf(" %d", H[i]);
    }
    printf("\n");
    
    return 0;
}

