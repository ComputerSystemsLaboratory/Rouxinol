#include<iostream>

using namespace std;

long gcd(long n, long m) {
    if (n < m)swap(n, m);
    if (n == m || m == 0)return n;
    return gcd(m, n % m);
}

int main() {
    long n, m;
    cin >> n >> m;
    cout << gcd(n, m) << endl;
}
