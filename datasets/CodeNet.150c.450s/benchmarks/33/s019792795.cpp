#include <algorithm>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <climits>

#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const int INF=100000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
using namespace std;
typedef pair<int ,int > P;
typedef long long ll;
int x,y,s;

int func(int a, int x) {
    return a*(100.0+x)/100.0;
}

void solve() {
    int ans = 0;
    rep(i,s) rep(j,s) {
        if(i==0 || j==0) continue;
        if(func(i,x) + func(j,x) == s) {
            ans = max(ans, func(i,y)+func(j,y));
        }
    }
    cout<<ans<<endl;
}

int main() {
    while(cin>>x>>y>>s) {
        if(x+y+s==0) break;
        solve();
    }
    return 0;
}