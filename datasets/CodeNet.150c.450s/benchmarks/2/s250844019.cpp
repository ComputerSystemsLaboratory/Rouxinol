#include <iostream>

int partition(int* A, const int p, const int r) {
    int x = A[r];
    int i = p-1;
    for(int j=p; j<r; ++j) {
        if(A[j] <= x) {
            ++i;
            std::swap(A[i], A[j]);
        }
    }
    std::swap(A[i+1], A[r]);
    return i+1;
}

int main() {
    int n;
    int A[100010];

    std::cin >> n;

    for(int i=0; i<n; ++i) {
        std::cin >> A[i];
    }

    int index = partition(A, 0, n-1);

    for(int i=0; i<n; ++i) {
        if(i == index) {
            std::cout << "[" << A[index] << "] ";
        } else if(i != n-1) {
            std::cout << A[i] << " ";
        } else {
            std::cout << A[i];
        }
    }

    std::cout << std::endl;
}
