#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <utility>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <functional>

using namespace std;

#define int long long

#define fst first
#define scd second
#define PB push_back
#define MP make_pair
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define omajinai ios::sync_with_stdio(false);cin.tie(0)
#define rep(i,x) for(int i=0;i<(int)(x);++i)
#define rep1(i,x) for(int i=1;i<=(int)(x);++i)

using ll=long long;
using ld=long double;
using vi=vector<int>;
using vvi=vector<vi>;
using pii=pair<int, int>;
using vpii=vector<pii>;

template<class T,class U>ostream&operator<<(ostream&os,const pair<T,U>p){os<<"("<<p.fst<<", "<<p.scd<<")";return os;}
template<class T>ostream&operator<<(ostream&os,const vector<T>v){rep(i,v.size()){if(i)os<<", ";os<<v[i];}return os;}
template<typename T>T&max(T&a,T&b){if(a>=b)return a;return b;}
template<typename T>T&min(T&a,T&b){if(a < b)return a;return b;}
template<typename T>bool chmax(T&a,T b){if(a < b){a=b;return true;}return false;}
template<typename T>bool chmin(T&a,T b){if(a > b){a=b;return true;}return false;}

constexpr int inf = 1e9;
constexpr ll linf = 3e18;
constexpr double eps = 1e-9;

int a[102];

ll dp[105][21];

signed main()
{
    int n; cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    dp[1][a[1]] = 1;

    for (int i = 2; i <= n - 1; ++i) {
        for (int j = 0; j <= 20; ++j) {
            if (j + a[i] <= 20) dp[i][j + a[i]] += dp[i - 1][j];
            if (j - a[i] >= 0) dp[i][j - a[i]] += dp[i - 1][j];
        }
    }

    cout << dp[n - 1][a[n]] << endl;
}