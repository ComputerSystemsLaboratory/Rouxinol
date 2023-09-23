#include <iostream>
#include <stdio.h>

#define MIN_N 1
#define MAX_N 100
#define MIN_A 0
#define MAX_A 100

using namespace std;

int selection_sort(int a[], int n) {
    int minj, swapped = 0;
    for(int i=0; i<n; i++) {
        minj = i;
        for(int j=i; j<n; j++) {
            if (a[j] < a[minj]) {
                minj = j;
            }
        }
        if (minj != i) {
            int tmp = a[i];
            a[i] = a[minj];
            a[minj] = tmp;
            swapped++;
        }
    }
    return swapped;
}

int main() {
    int n;
    int a[MAX_N];
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    int x = selection_sort(a, n);
    for(int i=0; i<n; i++) {
        printf("%d", a[i]);
        if (i < n-1) {
            printf(" ");
        }
    }
    printf("\n%d\n", x);
    
    return 0;
}