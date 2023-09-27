/* ALDS1_6_B: Partition */

#include <iostream>

int partition(int A[], int p, int r) {
    int pivot = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j] <= pivot) {
            i++;
            std::swap(A[i], A[j]);
        }
    }
    std::swap(A[i + 1], A[r]);
    return i + 1;
}

int main() {
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
        std::cin >> A[i];

    int q = partition(A, 0, n - 1);
    for (int i = 0; i < n; i++) {
        if (0 < i)
            std::cout << " ";
        if (i == q)
            std::cout << "[" << A[i] << "]";
        else
            std::cout << A[i];
    }
    std::cout << std::endl;
}