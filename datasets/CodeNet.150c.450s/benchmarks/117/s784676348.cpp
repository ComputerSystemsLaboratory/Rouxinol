#include <iostream>
#include <cstdio>

using namespace std;

const int MAX = 500000;
const int SENTINEL = 2000000000;
int L[MAX/2+2], R[MAX/2+2];
int count = 0;

void merge(int a[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; ++i) L[i] = a[left+i];
    for (int i = 0; i < n2; ++i) R[i] = a[mid+i];
    L[n1] = SENTINEL;
    R[n2] = SENTINEL;
    int j = 0, k = 0;
    for (int i = left; i < right; ++i) {
        ++count;
        if (L[j] <= R[k]) a[i] = L[j++];
        else a[i] = R[k++];
    }
}

void merge_sort(int a[], int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        merge_sort(a, left, mid);
        merge_sort(a, mid, right);
        merge(a, left, mid, right);
    }
}

void print(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    putchar('\n');
}

int
main(int argc, const char *argv[])
{
    int n;
    int a[MAX];
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    merge_sort(a, 0, n);
    print(a, n);
    printf("%d\n", count);

    return 0;
}