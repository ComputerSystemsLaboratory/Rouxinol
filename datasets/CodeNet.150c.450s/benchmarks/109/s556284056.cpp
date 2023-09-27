//#include <bits/stdc++.h>

#include <iostream>
#include <algorithm>

#include <bitset>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <utility>
#include <array>
#include <complex>
#include <valarray>

#include <cassert>
#include <cmath>
#include <functional>
#include <iomanip>
#include <chrono>
#include <random>
#include <numeric>


using namespace std;
//#define int long long

typedef long long ll;
typedef unsigned long long ull;
//typedef unsigned __int128 HASH;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef pair<ull, ull> pullull;
typedef pair<ll,int> plli;
typedef pair<double, int> pdbi;
typedef pair<int,pii> pipii;
typedef pair<ll,pll> plpll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<pii> vpii;
typedef vector<vector<int>> mat;

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n);i>0;i--)
#define rrep2(i,a,b) for (int i=(a);i>b;i--)
#define pb push_back
#define fi first
#define se second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()

const ll hmod1 = 999999937;
const ll hmod2 = 1000000000 + 9;
const int INF = 1<<30;
const ll mod = 1000000000 + 7;
const int dx4[4] = {1, 0, -1, 0};
const int dy4[4] = {0, 1, 0, -1};
const int dx8[8] = {1, 1, 1, 0, 0, -1, -1, -1};
const int dy8[8] = {0, 1, -1, 1, -1, 0, 1, -1};
const double pi = 3.141592653589793;

#define addm(X, Y) (X) = ((X) + ((Y) % mod) + mod) % mod
#define inside(y, x, h, w) (0 <= (y) && (y) < (h) && 0 <= (x) && (x) < (w)) ? true : false



signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;
        vector<pair<int, int>> p;
        rep(i, n) {
            int st, ar;
            rep(j, 2) {
                string tmp;
                cin >> tmp;
                int hh = (tmp[0] - '0') * 10 + tmp[1] - '0';
                int mm = (tmp[3] - '0') * 10 + tmp[4] - '0';
                int ss = (tmp[6] - '0') * 10 + tmp[7] - '0';

                if (j % 2 == 0) {
                    st = hh * 60 * 60 + mm * 60 + ss;
                }   
                else {
                    ar = hh * 60 * 60 + mm * 60 + ss;
                }
            }
            p.push_back({ar, st});
        }
        sort(all(p));
        int ans = 0;
        int now = INF;
        vector<int> sk;
        rep(i, n) {
            int idx = -1;
            rep(j, sk.size()) {
                if (sk[j] <= p[i].se) {
                    idx = j;
                }
            }
            if (idx == -1) {
                ans++;
            }
            else {
                sk.erase(sk.begin() + idx);
            }
            sk.push_back(p[i].fi);
        }
        cout << ans << endl;
    }
}