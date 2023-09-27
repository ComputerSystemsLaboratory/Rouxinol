#include <bits/stdc++.h>

using namespace std;

int gcd(int m, int n) {
    return n==0 ? m : gcd(n,m%n);
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
}
