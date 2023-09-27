#include <iostream>
#include <stdio.h>

#define MAX 100000

int n, H[MAX];

int parent (int i) { return int(i/2); }
int left (int i) { return i * 2; }
int right (int i) { return i * 2 + 1; }

int main() {
    int key;
    
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &key);
        H[i] = key;
    }
    
    for (int i = 1; i <= n; i++) {
        printf("node %d: ", i);
        printf("key = %d, ", H[i]);
        if (i != 1) printf("parent key = %d, ", H[parent(i)]);
        if (left(i) <= n) printf("left key = %d, ", H[left(i)]);
        if (right(i) <= n) printf("right key = %d, ", H[right(i)]);
        printf("\n");
    }
    
    return 0;
}

