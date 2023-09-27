#include <iostream>
#include <cstdio>
using namespace std;

void swap(int a[], int k, int l) {
    int tmp = a[k];
    a[k] = a[l];
    a[l] = tmp;
}

int main(void) {
    int w, n, k, l;
    int a[31];
    cin >> w;
    cin >> n;
    for(int i = 1; i <= w; i++) {
        a[i] = i;
    }
    for(int j = 0; j < n; j++) {
        scanf("%d,%d", &k, &l);
        swap(a, k, l);
    }
    for(int i = 1; i <= w; i++) {
        printf("%d\n", a[i]);
    }
}