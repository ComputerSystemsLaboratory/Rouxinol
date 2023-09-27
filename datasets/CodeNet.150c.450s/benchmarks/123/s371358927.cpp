#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

namespace {
    const int max_num = 100000000;
    const int max_check = floor(sqrt(max_num));
}

int main() {
    vector<bool> primes;
    for (int i = 0; i <= max_num; i++) {
        primes.push_back(true);
    }
    for (int i = 2; i <= max_check; i++) {
        if (primes[i]) {
            int j = i * i;
            while (j <= max_num) {
                primes[j] = false;
                j += i;
            }
        }
    }

    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        if (primes[in])
            count++;
    }

    cout << count << endl;

    return 0;
}