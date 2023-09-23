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
    int x, y, s;
    while (cin >> x >> y >> s && x){
        int ans = 0;
        FOR(i,1,s-1) FOR(j,1,s-1){
            int t = i*(100+x)/100 + j*(100+x)/100;
            if (t != s) continue;
            ans = max(ans, i*(100+y)/100 + j*(100+y)/100);
        }
        cout << ans << endl;
    }
    return 0;
}