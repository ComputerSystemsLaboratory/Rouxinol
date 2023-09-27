#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <string>
#include <vector>
#include <utility>
#include <complex>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <deque>
#include <tuple>
#include <bitset>
#include <limits>
#include <algorithm>
#include <array>
#include <random>
#include <complex>
#include <regex>
#include <iomanip>
using namespace std;
typedef long double ld;
typedef long long ll;
typedef vector<int> vint;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define fcout cout << fixed << setprecision(10)
#define rep(i,n)    for(int i=0; i<(int)n; i++)
#define mp(a,b) make_pair(a,b)
#define pb push_back
#define all(x) x.begin(), x.end()
const ll inf = 1e18;
const ll mod = 1e9 + 7;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    int n;
    cin >> n;
    vint p(n+1);
    rep(i,n) cin >> p[i] >> p[i+1];

    ll dp[110][110];

    for(int l=2; l<n+1; l++){
        for(int i=1; i<n-l+2; i++){
            int j= i+l-1;
            dp[i][j] = inf;
            for(int k=i; k<j; k++){
                dp[i][j] = min(dp[i][j], dp[i][k]+dp[k+1][j] + p[i-1]*p[k]*p[j] );
            }
        }
    }
    cout << dp[1][n] << endl;
    return 0;
}

