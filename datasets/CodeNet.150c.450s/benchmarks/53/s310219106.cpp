#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

using ll =  long long;

constexpr double EPS = 1e-10;

vector<ll> factorize(ll n) {
    vector<ll> factors;
    for(ll i=2LL;i*i<=n&&n>1LL;++i) {
        while(n % i == 0LL) {
            factors.push_back(i);
            n /= i;
        }
    }
    if(n != 1LL) factors.push_back(n);
    return factors;
}

int main() {
    ll n;
    cin >> n;
    cout << n << ":";
    for(ll factor: factorize(n)) {
        cout << " " << factor;
    }
    cout << endl;
}

