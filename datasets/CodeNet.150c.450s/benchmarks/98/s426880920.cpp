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

int main() {
    int n, m;
    while (cin >> n >> m && n){
        VI a(n), b(m);
        int sa = 0, sb = 0;
        REP(i,n){
            cin >> a[i];
            sa += a[i];
        }
        REP(i,m){
            cin >> b[i];
            sb += b[i];
        }
        int x = 1e9, y = 1e9;
        REP(i,n) REP(j,m){
            if (2*(b[j]-a[i]) == sb-sa && a[i]+b[j] < x+y){
                x = a[i];
                y = b[j];
            }
        }

        if (x == 1e9) cout << -1 << endl;
        else cout << x << " " << y << endl;
    }

    return 0;
}