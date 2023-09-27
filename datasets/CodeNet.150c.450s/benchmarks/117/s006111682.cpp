#include <iostream>


const int MAXNUM = 500000;
const int SENTINEL = 2000000000;
int A[MAXNUM];
int L[MAXNUM / 2 + 2];
int R[MAXNUM / 2 + 2];
int cnt = 0;

void merge(int *A, int left, int mid, int right) {
    int nl = mid - left;
    int nr = right - mid;
    for (int i = 0; i < nl; i++) {
        L[i] = A[left + i];
    }
    for (int i = 0; i < nr; i++) {
        R[i] = A[mid + i];
    }
    L[nl] = SENTINEL;
    R[nr] = SENTINEL;
    int li = 0, ri = 0;
    for (int i = left; i < right; i++) {
        cnt ++;
        if (L[li] <= R[ri]) {
            A[i] = L[li++];
        } else {
            A[i] = R[ri++];
        }
    }

}

void mergeSort(int *A, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}


int main (int argc, char **argv) {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }
    mergeSort(A, 0, n);
    for (int i = 0; i < n; i++) {
        if (i) std::cout << " ";
        std::cout << A[i];
    }
    std::cout << std::endl;
    std::cout << cnt << std::endl;
    return 0;
}
