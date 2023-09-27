#include <iostream>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    ll x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
}

