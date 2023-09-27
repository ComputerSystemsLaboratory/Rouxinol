#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vc = vector<char>;
using vb = vector<bool>;
using vs = vector<string>;
using vll = vector<long long>;
using vp = vector<pair<int, int>>;
using vvi = vector<vector<int>>;
using vvc = vector<vector<char>>;
using vvll = vector<vector<long long>>;
template<class T> inline bool chmax(T &a, T b) { if (a<b) {a=b; return 1;} return 0;}
template<class T> inline bool chmin(T &a, T b) { if (b<a) {a=b; return 1;} return 0;}

vector<pair<long long, int>> factor(long long x) {
    vector<pair<long long, int>> res;
    for (long long i = 2; i*i <= x; ++i) {
        if (x % i) continue;
        res.emplace_back(i, 0);
        while (x % i == 0) {
            x /= i;
            res.back().second++;
        }
    }
    if (x != 1) res.emplace_back(x, 1);
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    auto f = factor(n);
    cout << n << ":";
    for (auto&& p : f) {
        rep(i, p.se) cout << " " << p.fi;
    }
    cout << endl;
}
