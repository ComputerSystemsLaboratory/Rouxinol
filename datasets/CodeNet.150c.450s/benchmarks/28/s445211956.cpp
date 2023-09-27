#include <iostream>
#include <vector>

using namespace std;

bool is_feasible(uint32_t n, uint32_t k, uint32_t P, vector<uint32_t> w) {
    uint32_t sum = 0, count = 0;

    for (uint32_t i = 0; i < n; i++) {
        if (w[i] > P) {
            return false;
        }

        if (sum + w[i] > P) {
            sum = w[i];
            count++;
            if (count > k) {
                return false;
            }
        } else {
            sum += w[i];
        }
    }

    return count < k;
}

int main() {
    uint32_t n, k;

    cin >> n >> k;

    vector<uint32_t> w(n);

    for (uint32_t i = 0; i < n; i++) {
        cin >> w[i];
    }

    uint32_t left = 0, right = 1000000000;
    while (right - left > 1) {
        uint32_t mid = (left + right) / 2;
        if (is_feasible(n, k, mid, w)) {
            right = mid;
        } else {
            left = mid;
        }
    }

    cout << right << endl;

    return 0;
}