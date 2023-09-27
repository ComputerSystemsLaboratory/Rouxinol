//
// Created by Chisec Coin on 17/7/15.
//

#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <sstream>
#include <map>
const int NIL = -1;
typedef long long ll;
using std::cin;using std::cout;using std::endl;using std::max;using std::min;

int n, k;
ll w[100005];

int check(ll p) {
    int i = 0;
    for (int j = 0; j < k; ++j) {
        ll s = 0;
        while (s + w[i] <= p) {
            s += w[i++];
            if (i == n) {
                return n;
            }
        }
    }
    return i;
}

int solve() {
    ll left = 0;
    ll right = 100000 * 10000;
    ll mid;
    while (right - left > 1) {
        mid = (left + right) / 2;
        int v = check(mid);
        if (v >= n) {
            right = mid;
        } else {
            left = mid;
        }
    }
    return right;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }
    ll ans = solve();
    cout << ans << endl;
    return 0;
}