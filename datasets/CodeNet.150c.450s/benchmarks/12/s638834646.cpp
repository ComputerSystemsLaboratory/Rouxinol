#include <iostream>
#include <stdio.h>
#include <math.h>
#define MAX 100

int H[MAX];
int n;

int parent(int i) {
    int index = floor(i/2.0);
    return H[index];
}

int left(int i) {
    return H[2 * i];
}

int right(int i) {
    return H[(2 * i) + 1];
}

int main() {
    int val;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &val);
        H[i] = val;
    }
    
    for (int i = 1; i <= n; i++) {
        printf("node %d: ", i);
        printf("key = %d, ", H[i]);
        if (i>1) printf("parent key = %d, ", parent(i));
        if (2*i <= n) printf("left key = %d, ", left(i));
        if (2*i+1<= n) printf("right key = %d, ", right(i));
        printf("\n");
    }
    
    return 0;
}

