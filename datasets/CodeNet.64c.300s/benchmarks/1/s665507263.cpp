#include <iostream>

int partition(int *A, int l, int r) {
    int p = A[r];
    int i = l - 1;
    for (int j = l; j < r; j++) {
        if (A[j] <= p) {
            i++;
            std::swap(A[i], A[j]);
        }
    }
    std::swap(A[i+1], A[r]);
    return i + 1;
}
int A[100000];

int main (int argc, char **argv) {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    int pi = partition(A, 0, n-1);
    for (int i = 0; i < n; i++ ) {
        if (i) std::cout << " ";
        if (i != pi) {
            std::cout << A[i];
        }else{
            std::cout << "[" << A[i] << "]";
        }
    }
std::cout << std::endl;
}
