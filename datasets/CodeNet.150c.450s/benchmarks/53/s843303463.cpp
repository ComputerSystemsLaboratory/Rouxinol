#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct PrimeFactorization {
    vector<pair<int, int>> factors;
    void factor(ll n) {
        int sqrt_n = (int)(sqrtl(n) + 1e-6);
        primes.clear();
        isPrime.assign(sqrt_n + 1, true);
        for (int k = 2; k <= sqrt_n; ++k) {
            if (!isPrime[k]) continue;
            primes.push_back(k);
            for (int m = k * 2; m <= sqrt_n; m += k) isPrime[m] = false;
        }
        factors.clear();
        for (int i = 0; i < (int)primes.size() && n > 1;) {
            if (n % primes[i] == 0) {
                factors.emplace_back(primes[i], 0);
                while (n % primes[i] == 0) {
                    n /= primes[i];
                    factors.back().second++;
                }
            }
            i++;
        }
        if (n > 1) factors.emplace_back(n, 1);
        sort(factors.begin(), factors.end());
    }
    pair<int, int> operator [](int i) const { return factors[i]; }
    int size() const { return factors.size(); }
private:
    vector<int> primes;
    vector<bool> isPrime;
};

int main() {
    int n;
    cin >> n;
    PrimeFactorization pf;
    pf.factor(n);
    cout << n << ":";
    for (const auto& f : pf.factors) {
        for (int i = 0; i < f.second; ++i) {
            cout << " " << f.first;
        }
    }
    cout << endl;
}
