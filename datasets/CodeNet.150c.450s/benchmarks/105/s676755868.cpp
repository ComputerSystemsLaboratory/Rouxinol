#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <queue>
#include <deque>
#include <stack>
#include <fstream>
#include <cmath>
#include <random>
#include <complex>
#include <functional>

#define ll int64_t
#define Rep(i, n) for (ll i = 0; i < n; i++)
using namespace std;
typedef vector<ll> vec;
typedef vector<vec> mat;

const ll inf = 1LL << 60;

template<class T> inline void chmin(T& a, T b) {
    if (a > b) {
        a = b;
    }
}
template<class T> inline void chmax(T& a, T b) {
    if (a < b) {
        a = b;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll T;
    cin >> T;
    while (T--) {
        ll N;
        cin >> N;
        vec A(N);
        Rep (i, N) {
            cin >> A[i];
        }
        string S;
        cin >> S;

        vector<ll> basis;
        ll ans = 0;
        for (ll i = N-1; i >= 0; i--) {
            if (S[i] == '0') {
                for (ll b : basis) chmin(A[i], A[i]^b);
                if (A[i]) basis.push_back(A[i]);
            } else {
                for (ll b : basis) chmin(A[i], A[i]^b);
                if (A[i]) ans = 1;
            }
        }

        cout << ans << "\n";
    }
}