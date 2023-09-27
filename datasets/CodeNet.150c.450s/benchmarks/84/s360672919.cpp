/* ALDS1_5_D: The number of inversions */

#include <iostream>
#include <cmath>

const int MAX_VALUE = pow(10, 9);

long long count_and_merge(int A[], int left, int mid, int right) {
    int n_left  = mid - left;
    int n_right = right - mid;
    int *L = new int[n_left + 1];
    int *R = new int[n_right + 1];

    for (int i = 0; i < n_left; i++)
        L[i] = A[left + i];
    for (int i = 0; i < n_right; i++)
        R[i] = A[mid + i];
    L[n_left] = R[n_right] = MAX_VALUE + 1;

    int i_l = 0, i_r = 0;
    long long n_invs = 0;
    int n_left_remains = n_left;
    for (int i_a = left; i_a < right; i_a++) {
        if (L[i_l] <= R[i_r]) {
            A[i_a] = L[ i_l++ ];
            n_left_remains--;
        } else {
            A[i_a] = R[ i_r++ ];
            n_invs += n_left_remains;
        }
    }
    return n_invs;
}

long long merge_sort(int A[], int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        long long n_invs = 0;
        n_invs += merge_sort(A, left, mid);
        n_invs += merge_sort(A, mid, right);
        n_invs += count_and_merge(A, left, mid, right);
        return n_invs;
    }
    return 0;
}

long long count_inversions(int n, int A[]) {
    return merge_sort(A, 0, n);
}

int main() {
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; i++)
        std::cin >> A[i];

    long long n_invs = count_inversions(n, A);
    std::cout << n_invs << std::endl;
    return 0;
}