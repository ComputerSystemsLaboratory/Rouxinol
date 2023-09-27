#include <iostream>
#include <stdio.h>
#include <string>

#define MAX 100000000
#define INFTY (1<<30)

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

void heapIncrease(int key, int i) {
    if (H[i] > key) return;
    H[i] = key;
    while (H[i/2] < H[i] && i > 1) {
        std::swap(H[i/2], H[i]);
        i = i/2;
    }
}

void insert(int key) {
    n++;
    H[n] = -INFTY;
    heapIncrease(key, n);
}


int extract() {
    if (n < 1) return -INFTY;
    int max = H[1];
    H[1] = H[n];
    n--;
    maxHeap(1);
    
    return max;
}



int main() {
    int key;
    char moji[10];
    n = 0;
    
    while (1) {
        scanf("%s", moji);
        if (moji[0] == 'i') {
            scanf("%d", &key);
            insert(key);
        } else if (moji[0] == 'e' && moji[1] == 'x') {
            printf("%d\n", extract());
        } else {
            break;
        }
    }
    
    return 0;
}

