#include <iostream>
using namespace std;

typedef long long ll;

ll gcd (ll x, ll y) {
    if (x < y) {
        swap(x, y);
    }
    x = x - (x / y) * y;
    if (x == 0) {
        return y;
    }
    else {
        return gcd (x, y);
    }
}

int main () {
    ll x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
}