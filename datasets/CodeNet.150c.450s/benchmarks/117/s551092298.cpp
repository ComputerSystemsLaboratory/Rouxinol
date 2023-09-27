#include <iostream>
#include <stdio.h>

using namespace std;

int n;
int a[500005];
int lf[500005 / 2];
int rt[500005 / 2];
int count = 0;

void merge(int l, int mid, int r) {
    int n1 = mid - l;
    int n2 = r - mid;
    for (int i = 0; i < n1; i++) {
        lf[i] = a[l + i];
        rt[i] = a[mid + i];
    }
    for (int i = 0; i < n2 - n1; i++) {
        rt[n1 + i] = a[mid + n1 + i];
    }
    lf[n1] = 2000000000;
    rt[n2] = 2000000000;
    int i = 0;
    int j = 0;
    for (int k = l; k < r; k++) {
        count++;
        if (lf[i] <= rt[j]) {
            a[k] = lf[i];
            i++;
        } else {
            a[k] = rt[j];
            j++;
        }
    }
}

void mergeSort(int l, int r) {
    if (l + 1 < r) {
        int mid = (l + r) / 2;
        mergeSort(l, mid);
        mergeSort(mid, r);
        merge(l, mid, r);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    mergeSort(0, n);
    for (int i = 0; i < n; i++) {
        if (i) {
            printf(" ");
        }
        printf("%d", a[i]);
    }
    printf("\n%d\n", count);
    return 0;
}