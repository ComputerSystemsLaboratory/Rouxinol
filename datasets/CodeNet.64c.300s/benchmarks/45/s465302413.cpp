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
    int n, m, p;
    while (cin >> n >> m >> p && n){
        m--;
        int s = 0, x;
        REP(i,n){
            int a;
            cin >> a;
            s += a;
            if (i == m) x = a;
        }
        int ans = (x == 0 ? 0 : s * (100-p) / x);
        cout << ans << endl;
    }

    return 0;
}