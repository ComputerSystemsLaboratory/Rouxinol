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

const int N = 3600*24;

int main() {
    int n;
    while (cin >> n && n){
        VI d(N);
        REP(i,n) {
            int h, m, s;
            scanf("%d:%d:%d", &h, &m, &s);
            s += 60*m + 3600*h;
            d[s]++;
            scanf("%d:%d:%d", &h, &m, &s);
            s += 60*m + 3600*h;
            d[s]--;
        }
        FOR(i,1,N-1) d[i] += d[i-1];
        int ans = 0;
        REP(i,N) ans = max(ans, d[i]);
        cout << ans << endl;
    }

    return 0;
}