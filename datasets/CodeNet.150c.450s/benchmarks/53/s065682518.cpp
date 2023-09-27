#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

vector<int> primeFactors(ll n) {
    ll k = n;
    vector<int> result;
    for (int i = 2; i * i <= n; i++) {
        while (k % i == 0) {
            result.push_back(i);
            k = k / i;
        }
    }
    if (k > 1) {
        result.push_back(k);
    }
    return result;
}

int main() {
    ll n;
    cin >> n;
    vector<int> factors = primeFactors(n);
    cout << n << ":";
    for (int i : factors) {
        cout << " " << i;
    }
    cout << endl;
    return 0;
}