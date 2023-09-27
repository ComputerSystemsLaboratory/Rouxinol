#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<complex>
#include<bitset>
#include<stack>
#include<unordered_map>
#include<utility>
#include<tuple>
#include<cassert>
using namespace std;
typedef long long ll;
typedef unsigned int ui;
const ll mod = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
typedef pair<int, int> P;
#define stop char nyaa;cin>>nyaa;
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define Per(i,sta,n) for(int i=n-1;i>=sta;i--)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
#define Rep1(i,sta,n) for(int i=sta;i<=n;i++)
typedef long double ld;
const ld eps = 1e-8;
const ld pi = acos(-1.0);
typedef pair<ll, ll> LP;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int n,m;
vector<int> G[200010];
int d[200010],pre[200010];

void solve(){
    cin >> n >> m;
    rep(i,n){
        d[i]=mod;
    }
    rep(i,m){
        int a,b;cin >> a >> b;a--;b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    d[0]=0;
    queue<int> que;que.push(0);
    while(!que.empty()){
        int s=que.front();que.pop();
        for(int t:G[s]){
            if(d[t]!=mod) continue;
            d[t]=d[s]+1;
            pre[t]=s;
            que.push(t);
        }
    }
    rep(i,n){
        if(d[i]==mod){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    Rep(i,1,n){
        cout << pre[i]+1 << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(50);
    solve();
}