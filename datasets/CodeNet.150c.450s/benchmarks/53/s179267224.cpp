#include <iostream>
#include <cmath>
#include <vector>

// namespace
using namespace std;

// O(n log log n)
void sieve(vector<bool> &is_prime) {
    int n = is_prime.size();
    for (int i = 0; i < n; ++i) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for (int i = 0; i < n; ++i) {
        if (is_prime[i]) {
            for (int j = 2 * i; j < n; j += i) is_prime[j] = false;
        }
    }

}

int main() {
    int n;
    cin >> n;
    vector<bool> is_prime((int)sqrt(n) + 10);
    sieve(is_prime);
    cout << n << ":";
    for (int i = 2, m = n; i * i <= m; ++i) {
        while (n % i == 0 && is_prime[i]) {
            n /= i;
            cout << " " << i;
        }
    }
    if (n != 1) cout << " " << n;
    cout << endl;
    return 0;
}

