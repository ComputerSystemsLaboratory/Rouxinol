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

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

#define fst first
#define scd second
#define PB push_back
#define MP make_pair
#define rep(i,x) for(int i=0;i<(x);++i)
#define rep1(i,x) for(int i=1;i<=(x);++i)
#define rrep(i,x) for(int i=(x)-1;i>=0;--i)
#define rrep1(i,x) for(int i=(x);i>=1;--i)
#define FOR(i,a,x) for(int i=(a);i<(x);++i)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()

#define omajinai ios::sync_with_stdio(false);cin.tie(0)

template<typename T>bool chmax(T&a,T b){if(a<b){a=b;return true;}return false;}
template<typename T>bool chmin(T&a,T b){if(a>b){a=b;return true;}return false;}
template<typename T>T get(){T a;cin>>a;return a;}
template<typename T>T rev(T a){reverse(all(a));return a;}
template<typename T>istream&operator>>(istream&is,vector<T>&vec){rep(i,vec.size())is>>vec[i];return is;}
template<typename T>vector<T>&sort(vector<T>&a){sort(all(a));return a;}

const int inf = 1e9;
const ll linf = 3e18;
const double eps = 1e-9;

int dp[1000001], dp_odd[1000001];

signed main()
{
    vi tet, tet_odd;

    for (int i = 1; ; ++i) {
        tet.PB(i * (i + 1) * (i + 2) / 6);
        if (tet.back() >= 1000000) break;
    }

    for (int i = 0; i < tet.size(); ++i) {
        if (tet[i] & 1) tet_odd.PB(tet[i]);
    }

    for (int i = 1; i <= 1000000; ++i) dp[i] = dp_odd[i] = inf;

    for (int i = 1; i <= 1000000; ++i) {
        for (int j = 0; j < tet.size(); ++j) {
            if (i >= tet[j]) {
                dp[i] = min(dp[i], dp[i - tet[j]] + 1);
            }
            if (i < tet[j]) break;
        }

        for (int j = 0; j < tet_odd.size(); ++j) {
            if (i >= tet_odd[j]) {
                dp_odd[i] = min(dp_odd[i], dp_odd[i - tet_odd[j]] + 1);
            }
            if (i < tet_odd[j]) break;
        }
    }

    int N;
    while (cin >> N, N) cout << dp[N] << ' ' << dp_odd[N] << endl;
}