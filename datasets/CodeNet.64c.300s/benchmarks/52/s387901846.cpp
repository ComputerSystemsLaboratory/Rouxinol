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

int n,s;
int sum(int S) {
    int res = 0;
    rep(i,10) if((S>>i)&1) res+=i;
    return res;
}
int dfs(int S,int cnt) {
    if(cnt==n) {
        if(sum(S)==s) return 1;
        else return 0;
    }
    int res=0;
    rep(i,10) {
        if(!(S>>i)&1) {
            res+=dfs(S|(1<<i),cnt+1);
        }
    }

    return res;
}
void solve() {
    cout<<dfs(0,0)<<endl;
}
int main() {
    while(cin>>n>>s) {
        if(n+s==0) break;
        solve();
    }
    return 0;
}