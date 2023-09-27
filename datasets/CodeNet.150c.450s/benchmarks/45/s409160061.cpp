#include <iostream>
using namespace std;

long long power(long long m, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n % 2 == 1) res = res * m % mod;
        m = m * m % mod;
        n /= 2;
    }
    return res;
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << power(m, n, 1000000007) << endl;
    return 0;
}
