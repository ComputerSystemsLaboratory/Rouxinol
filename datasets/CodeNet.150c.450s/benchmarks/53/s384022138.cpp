#include <iostream>
#include <vector>
using namespace std;

vector<int> factorize (int x) {
    vector<int> ret;
    for (long long i = 2; i * i <= x; i++) {
        while (x % i == 0) {
            ret.push_back(i);
            x /= i;
        }
    }
    if (x > 1) ret.push_back(x);
    return ret;
}

int main() {
    int n;
    cin >> n;
    vector<int> ans = factorize(n);
    cout << n << ':';
    for (auto e : ans) cout << ' ' << e; cout << '\n';
    return 0;
}
