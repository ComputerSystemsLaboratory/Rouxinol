#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ullong;

ullong L = 1000000007;

ullong power(ullong m, ullong n) {
    if (n == 0) {
        return (ullong) 1; 
    }

    ullong res = power(m, n / 2);
    if (n % 2 == 0) {
        res = (res * res) % L;
    } else {
        res = (((res * res) % L) * m) % L;
    }

    return res;
}

int main() {
    int m, n;
    cin >> m >> n;

    cout << power(m, n) << endl;

    return 0;
}
