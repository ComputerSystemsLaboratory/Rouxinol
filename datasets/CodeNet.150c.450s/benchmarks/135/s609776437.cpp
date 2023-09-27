#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
 
#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define pi M_PI
 
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<VI> VVI;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

const int N = 1500001;

int a[N], b[N];

int main() {
    int n, m;
    while (cin >> n >> m && n){
        VI h(n), w(m);
        REP(i,n) scanf("%d", &h[i]);
        REP(i,m) scanf("%d", &w[i]);
        REP(i,N) a[i] = b[i] = 0;
        REP(i,n){
            int x = 0;
            FOR(j,i,n-1){
                x += h[j];
                a[x]++;
            }
        }
        REP(i,m){
            int x = 0;
            FOR(j,i,m-1){
                x += w[j];
                b[x]++;
            }
        }
        ll ans = 0;
        REP(i,N) ans += a[i]*b[i];
        cout << ans << endl;
    }

    return 0;
}