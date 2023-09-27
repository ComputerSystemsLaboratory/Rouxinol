#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int n, count;
int *S;

inline void merge(int left, int mid, int right) {
//    printf("[merge] left = %d, mid = %d, right = %d\n",
//                    left,      mid,      right);
    int n1 = mid - left, n2 = right - mid;
    int *L = new int[n1 + 1], *R = new int[n2 + 1];
    memcpy(L, S + left, sizeof(int) * n1);
    memcpy(R, S + mid, sizeof(int) * n2);
    L[n1] = R[n2] = 1e9+1;      // sentinel 

    for (int i = 0, j = 0, k = left; k < right; ++k) {
        ++count;
        if (L[i] <= R[j]) {
            S[k] = L[i++];
        }
        else {
            S[k] = R[j++];
        }
    }
    delete[] L;
    delete[] R;
}

inline void merge_sort(int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
//        printf("[merge_sort] left = %d, mid = %d, right = %d\n",
//                             left,      mid,      right);
        merge_sort(left, mid);
        merge_sort(mid, right);
        merge(left, mid, right);
    }
}

int main(void) {

    scanf("%d", &n);

    S = new int[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", S + i);
    }

    merge_sort(0, n);

    printf("%d", S[0]);
    for (int i = 1; i < n; ++i) {
        printf(" %d", S[i]);
    }
    printf("\n%d\n", count);

    delete[] S;

    return 0;
}