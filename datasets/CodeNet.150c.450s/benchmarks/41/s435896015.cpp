#include<bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;

int main() {
    int v,e;cin>>v>>e;
    
    ll INF =10000000000007;
    
    ll a[v][v];
    rep(i,v){
        rep(j,v){
            if(i==j)a[i][j]=0;
            else a[i][j] = INF;
        }
    }
    
    rep(i,e){
        ll s,t,d;
        cin>>s>>t>>d;
        a[s][t]=d;
    }
    
    rep(k,v){
        rep(i,v){
            rep(j,v){
              if(a[k][j]!=INF && a[i][k]!=INF){
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
                }}
            }
        }
    
    rep(i,v){
        if(a[i][i]<0){
            cout<<"NEGATIVE CYCLE"<<endl;
            return 0;
        }
    }
    
    rep(i,v){
        rep(j,v){
            if(a[i][j]==INF)cout<<"INF";
            else cout<<a[i][j];
            
            if(j == v-1)cout<<endl;
            else cout<<" ";
        }
    }
    
 	return 0;
}
