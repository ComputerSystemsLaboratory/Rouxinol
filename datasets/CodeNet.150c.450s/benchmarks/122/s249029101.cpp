#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#define MAX 5000000
#define INFTY (1<<30)

int n, H[MAX];

void maxHeapify(int i) {
    int l, r, largest;
    l = 2 * i;
    r = 2 * i + 1;
    
    if ( l <= n && H[l] > H[i]) largest = l;
    else largest = i;
    if ( r <= n && H[r] > H[largest]) largest = r;
    
    if (largest != i) {
        std::swap(H[i], H[largest]);
        maxHeapify(largest);
    }
}

int heapExtraMax() {
    if (n < 1) return -1;
    int max = H[1];
    H[1] = H[n--];
    maxHeapify(1);
    return max;
}

void heapIncreaseKey(int key, int i) {
    if ( H[i] > key ) return;
    H[i] = key;
    while ( i > 1 && H[int(i/2.0)] < H[i] ) {
        std::swap(H[int(i/2.0)], H[i]);
        i = int(i/2.0);
    }
}

void insert(int key) {
    n++;
    H[n] = -INFTY;
    heapIncreaseKey(key, n);
}


int main() {
    int key;
    char moji[10];
    n = 0;
    
    while (1) {
        scanf("%s", moji);
        if (moji[0] == 'e' && moji[1] == 'n') break;
        
        if (moji[0] == 'i') {
            scanf("%d", &key);
            insert(key);
        } else {
            printf("%d\n", heapExtraMax());
        }
    }
    
    return 0;
}

