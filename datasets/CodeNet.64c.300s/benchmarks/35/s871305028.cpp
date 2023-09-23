#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int g[101][101];
int main(){
    int n,u,k,v;
    cin>>n;
    rep(i,n){
        cin>>u>>k;
        --u;
        rep(j,k){
            cin>>v;
            --v;
            g[u][v]=1;
        }
    }
    rep(i,n){
        rep(j,n) cout<<g[i][j]<<(j==n-1?"":" ");
        cout<<endl;
    }
    return 0;
}
