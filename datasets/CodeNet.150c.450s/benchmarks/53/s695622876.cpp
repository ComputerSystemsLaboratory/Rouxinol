#include <vector>
using namespace std;

template <typename T>
vector<T> factorize(T n) {
    vector<T> factors;
    for (T p = 2; p *p <= n; ++p) {
        while (n % p == 0) {
            factors.push_back(p);
            n /= p;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

#include <iostream>
int main() {
    unsigned long long n;
    vector<unsigned long long> f;
    cin >> n;
    f = factorize(n);
    cout << n << ":";
    for (unsigned i = 0; i < f.size(); ++i) {
        cout << " " << f[i];
    }
    cout << endl;
    return 0;
}