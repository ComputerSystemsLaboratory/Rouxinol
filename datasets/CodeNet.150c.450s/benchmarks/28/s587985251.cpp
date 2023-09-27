#include <iostream>
#include <vector>

int check(int p, std::vector<long long int> &w, int n, int k) {
    int index = 0;
    for (int i = 0; i < k; i++) {
        long long int sum = 0;
        while (sum + w[index] <= p) {
            sum += w[index];
            index++;
            if (index == n) return n;
        }
    }

    return index;
}

int main(int argc, char const *argv[]) {
    int n, k;
    std::cin >> n >> k;

    std::vector<long long int> w(n);
    for (int i = 0; i < n; i++) {
        std::cin >> w[i];
    }

    long long int min = 0;
    long long int max = 100000 * 10000;
    long long int mid;

    while (max - min > 1) {
        mid = min + (max - min) / 2;
        if (check(mid, w, n, k) >= n) max = mid;
        else min = mid;
    }

    std::cout << max << std::endl;

    return 0;
}