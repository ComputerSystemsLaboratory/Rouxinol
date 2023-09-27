#pragma GCC optimize("O3")
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
#include <bitset>
using namespace std;

using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;

template <class T> inline T chmax(T &a, const T b) {return a = (a < b) ? b : a;}
template <class T> inline T chmin(T &a, const T b) {return a = (a > b) ? b : a;}

constexpr int MOD = 1e9 + 7;
constexpr int inf = 1e9;
constexpr long long INF = 1e18;

#define all(a) (a).begin(), (a).end()

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int d; cin>>d;
    vector<int> c(26);
    for(int i=0; i<26; i++) cin>>c[i];
    vector<vector<int>> s(d, vector<int>(26));
    for(int i=0; i<d; i++){
        for(int j=0; j<26; j++) cin>>s[i][j];
    }
    
    vector<int> l(26, 0);
    ll ans = 0;
    for(int i=0; i<d; i++){
        int t; cin>>t;
        t--;
        ans += s[i][t];
        l[t] = i + 1;
        for(int j=0; j<26; j++){
            ans -= c[j] * (i + 1 - l[j]);
        }
        cout << ans << endl;
    }

    return 0;
}