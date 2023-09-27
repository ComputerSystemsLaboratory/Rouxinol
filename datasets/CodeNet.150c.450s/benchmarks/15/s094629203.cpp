#include <algorithm>
#include <bits/stdc++.h>
#include <deque>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;
#define INF 1LL << 40;
#define ll long long
#define REP(i, a, b) for(int i = a; i < b; i++)
#define rep(i, n) REP(i, 0, n)
#define prique priority_queue
typedef pair<int, int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<P> vp;
typedef vector<ll> vl;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
template <class T> inline void chmax(T &a, T b) { a < b ? a = b : a; };
template <class T> inline void chmin(T &a, T b) { a > b ? a = b : a; };
int main() {
    int n, q, res = 0;
    cin >> n;
    vi s(n);
    rep(i, n) cin >> s[i];
    cin >> q;
    vi t(q);
    rep(i, q) cin >> t[i];
    rep(i, q) rep(j, n) {
        if(t[i] == s[j]) {
            res++;
            break;
        }
    }
    cout << res << endl;
    return 0;
}
