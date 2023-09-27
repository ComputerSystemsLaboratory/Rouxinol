#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

void swap(int* A, int a, int b) {
    int tmp = A[a];
    A[a] = A[b];
    A[b] = tmp;
}

int main() {
    int n;
    int A[100001];
    std::cin >> n;
    for (int i=0; i<n; i++) {
        std::cin >> A[i];
    }
    int div = A[n-1];
    int i=0;
    for (int j=1; j<=n; j++) {
        if (A[j-1] <= div) {
            i++;
            swap(A, i-1, j-1);
        }
    }

    for (int c=0; c<i-1; c++) {
        std::cout << A[c] << " ";
    }
    std::cout << "[" << div << "]";
    for (int c=i; c<n; c++) {
        std::cout << " " << A[c];
    }
    std::cout << std::endl;

    return 0;
}
