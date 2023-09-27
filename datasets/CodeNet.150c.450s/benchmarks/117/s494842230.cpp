/* ALDS1_5_B: Merge Sort */

#include <iostream>
#include <climits>

int n_compared = 0;

void merge(int A[], int left, int mid, int right) {
    int n_left  = mid - left;
    int n_right = right - mid;
    int L[n_left], R[n_right];

    for (int i = 0; i < n_left; i++)
        L[i] = A[left + i];
    for (int i = 0; i < n_right; i++)
        R[i] = A[mid + i];
    L[n_left] = R[n_right] = INT_MAX;

    int i_l = 0, i_r = 0;
    for (int i_a = left; i_a < right; i_a++) {
        A[i_a] = ( L[i_l] <= R[i_r] ) ? L[ i_l++ ] : R[ i_r++ ];
        n_compared++;
    }
}

void merge_sort(int A[], int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        merge_sort(A, left, mid);  // left to mid - 1
        merge_sort(A, mid, right); // mid to right - 1
        merge(A, left, mid, right);
    }
}

int main() {
    std::ios::sync_with_stdio(false);

    int n = 0;
    std::cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
        std::cin >> A[i];

    merge_sort(A, 0, n);

    std::cout << A[0];
    for (int i = 1; i < n; i++)
        std::cout << " " << A[i];
    std::cout << std::endl;
    std::cout << n_compared << std::endl;

    return 0;
}