#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool is_prime(int64_t n) {
    if (n == 2) {
        return true;
    } else if (n % 2 == 0) {
        return false;
    }

    for (int64_t i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int32_t N, count = 0;

    cin >> N;

    for (int32_t i = 0; i < N; i++) {
        int64_t n;
        cin >> n;

        if (is_prime(n)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}