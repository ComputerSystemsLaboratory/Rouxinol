#include<iostream>
using namespace std;
typedef unsigned long long ullong;

ullong powerLargeNum(int m, int n, int mod) {
    if (n == 0) return 1;
    ullong ans = powerLargeNum(m, n/2, mod);
    ans = (ans * ans) % mod;
    if (n % 2 == 1) ans = (ans * m) % mod;
    return ans;
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << powerLargeNum(m, n, 1000000007) << endl;
}