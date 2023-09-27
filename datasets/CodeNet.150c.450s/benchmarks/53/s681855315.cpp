#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD = 1000000007;

template <class T>
map<T, T> prime_factorize(T n) {
    map<T, T> res;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            res[i]++;
            n /= i;
        }
    }
    if (n != 1)
        res[n] = 1;
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << n << ':';
    map<int, int> m = prime_factorize(n);
    for (auto p : m) {
        while (p.second) {
            cout << ' ' << p.first;
            p.second--;
        }
    }
    cout << endl;
    return 0;
}
