#include <bits/stdc++.h>
//#include "atcoder/all"
typedef long long int ll;
using namespace std;
// using namespace atcoder;
int main() {
    int n, k;
    cin >> n >> k;
    ll a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll sum = 0;
    for (int i = k + 1; i <= n; i++) {
        if (a[i] > a[i - k]) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}