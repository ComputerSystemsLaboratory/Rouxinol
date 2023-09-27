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
int n,q;
int a[30];

bool dfs(int idx,int sum,int m) {
    if(sum==m) return true;
    if(idx == n) return false;
    return dfs(idx+1,sum+a[idx],m) || dfs(idx+1,sum,m);
}

int main() {
    cin>>n;
    rep(i,n) cin>>a[i];
    cin>>q;
    while(q--) {
        int m;
        cin>>m;
        if(dfs(0,0,m)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}