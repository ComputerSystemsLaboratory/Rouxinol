#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int n, amax=-1;
    static int A[2000001], B[2000001], C[10001]={};
    std::cin >> n;
    for (int i=0; i<n; i++) {
        std::cin >> A[i];
        C[A[i]] += 1;
        if (A[i] > amax) {
            amax = A[i];
        }
    }
    for (int i=1; i<=amax; i++) {
        C[i] = C[i]+C[i-1];
    }

    for (int i=n-1; i>=0; i--) {
        B[C[A[i]]-1] = A[i];
        C[A[i]] -= 1;
    }

    for (int i=0; i<n-1; i++) {
        std::cout << B[i] << " ";
    }
    std::cout << B[n-1] << std::endl;

    return 0;
}
