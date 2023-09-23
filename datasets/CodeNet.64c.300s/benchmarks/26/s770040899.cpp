//Power
#include <iostream>

using namespace std;

long long  power(long long m, long long n, long long M) {
    if(n == 0) return 1;
    if(n == 1) return m;
    return ((power(m * m % M, n / 2, M) * power(m, n % 2, M))) % M;
}

int main() {
    long long m, n;
    const long long M = 1000000007;
    cin >> m >> n;
    cout << power(m, n, M) << endl;
}
