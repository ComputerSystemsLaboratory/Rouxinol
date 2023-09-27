#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <bitset>

using ll = long long;

using namespace std;

// xorの掃き出し法 O(N^2)
// matに基底たちが入る
// Tはbitsetは無理(minしないといけないから)
template <typename T>
int gauss_jordan(vector<T> &mat) {
    vector<T> bases;
    for (auto e:mat) {
        for (auto &b:bases) {
            e = min(e, e^b);
        }
        if (e)
            bases.push_back(e);
    }
    mat.swap(bases);
    return (int)mat.size();
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n; cin >> n;
        ll a[n]; for (auto &ai:a) cin >> ai;
        string s; cin >> s;
        bool ans = false;
        vector<ll> bases;
        for (int i=n-1; i>=0; i--) {
            bool now = s[(size_t)i] - '0';
            if (now) {
                for (auto &bi:bases) {
                    a[i] = min(a[i], a[i]^bi);
                }
                if (a[i]) {
                    ans = true;
                    break;
                }
            } else {
                bases.push_back(a[i]);
                gauss_jordan(bases);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}