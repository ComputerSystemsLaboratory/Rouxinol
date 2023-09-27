#include <iostream>
#include<stdio.h>

#define MAX 251
using namespace std;

int getParent(int i) {
    return i/2;
}

int getLeft(int i) {
    return 2*i;
}

int getRight(int i) {
    return 2*i+1;
}

int main()
{
    int n, arr[MAX];
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }

    int parent, left, right;
    for(int i = 1; i <= n; i++) {
        printf("node %d: key = %d, ", i, arr[i]);

        parent = getParent(i);
        if(parent > 0)
            printf("parent key = %d, ", arr[parent]);

        left = getLeft(i);
        if(left <= n)
            printf("left key = %d, ", arr[left]);

        right = getRight(i);
        if(right <= n)
            printf("right key = %d, ", arr[right]);

        printf("\n");
    }
    return 0;
}