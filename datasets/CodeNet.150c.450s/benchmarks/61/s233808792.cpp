#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <cstring>
#include <cmath>


#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for (int i = (int)(k); i < (int)(n); i++)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; i--)
#define rREP(i, k, n) for (int i = (int)(n) - 1; i >= k; i--)

#define debug(x) cerr <<#x << ": " << x << endl;

#define fi first
#define se second

#define vi vector<int>
#define pb push_back
#define mp make_pair

#define pcnt __builtin_popcount

typedef long long ll;
const ll inf = 900900900100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
const int MID = 255;
using namespace std;

int main(){
    ll n,x,a,b,c;
    while(cin >> n >> a >> b >> c >> x,n) {
        int f = 0;
        int y[110] = {};
        rep(i,n) cin >> y[i];
        int k = 0;
        rep(i,10001) {
            if(x == y[k]) k += 1;
            if(k >= n) break;
            x = (a * x + b) % c;
            f++;
        }
        if(f > 10000) cout << -1 << endl;
        else cout << f << endl;
    }
    return 0;
}

