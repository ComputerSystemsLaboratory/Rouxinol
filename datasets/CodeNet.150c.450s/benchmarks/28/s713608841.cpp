#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

int minimum_k(int* w, int n, long int P) {
    int res = P, k=1;
    for (int i=0; i<n; i++) {
        if (res >= w[i]) {
            res -= w[i];
        } else {
            k++;
            res = P-w[i];
        }
    }
    return k;
}

long int binary(int k, int* w, int n, long int P_min, long int P_max) {
    //std::cout << P_min << " " << P_max << " " << minimum_k(w, n, (P_min+P_max)/2) << std::endl;
    if (P_max-P_min <= 1) {
        if (minimum_k(w, n, P_min) <= k) {
            return P_min;
        } else {
            return P_max;
        }
    }
    if (minimum_k(w, n, (P_min+P_max)/2) <= k) {
        return binary(k, w, n, P_min, (P_min+P_max)/2);
    } else {
        return binary(k, w, n, (P_min+P_max)/2, P_max);
    }
}

int main() {
    int n, k, w_max=0;
    long int w_sum=0;
    int w[100001] = {};
    std::cin >> n >> k;
    for (int i=0; i<n; i++) {
        std::cin >> w[i];
        w_sum += w[i];
        if (w[i] > w_max) {
            w_max = w[i];
        }
    }
    // P_min = w_min, P_max = w_sum
    std::cout << binary(k, w, n, w_max, w_sum) << std::endl;

    return 0;
}
