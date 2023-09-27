#include<bits/stdc++.h>
using namespace std;

typedef long long llint;
typedef long double ld;
typedef pair<int,int> P;

#define inf 1e18
#define mod 1000000007
#define sort(v) sort(v.begin(),v.end())
#define reverse(v) reverse(v.begin(),v.end())
#define rep(i,a,n) for(int i=a;i<n;i++)


priority_queue<llint,vector<llint>,greater<llint> > que;
priority_queue<llint> Que;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }


#define N 100

int g[N][N];
int d[N];
int f[N];
int t=0;


bool flag[N];
int n;

void dfs(int i){
    flag[i]=true;
    d[i]=++t;
    rep(j,0,n){
        if(g[i][j]==1 && !flag[j]){
            dfs(j);
        }
    }
    f[i]=++t;
}

void solve(){
    cin >> n;
    int u,k;
    rep(i,0,n){
        cin >> u >> k;
        u--;
        rep(j,0,k){
            int v;
            cin >> v;
            v--;
            g[u][v]=1;
        }
    }
    rep(i,0,n){
        if(!flag[i]){
            dfs(i);
        }
    }
    rep(i,0,n){
        cout << i+1 << " " << d[i] << " " << f[i] << endl;
    }
}

int main(){
    solve();
    return 0;
}




