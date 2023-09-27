#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
//#define INF (1e9+1)
#define INF (1LL<<59)

#define int ll

signed main(){
    int v,e;
    cin>>v>>e;
    int d[101][101];
    rep(i,101)rep(j,101)d[i][j] = INF;
    rep(i,101)d[i][i] = 0;
    
    
    rep(i,e){
        int s,t,c;
        cin>>s>>t>>c;
        d[s][t] = c;
    }
    
    rep(k,v){
        rep(i,v){
            rep(j,v){
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    
    rep(i,v){
        if(d[i][i]<0){
            cout<<"NEGATIVE CYCLE"<<endl;
            return 0;
        }
    }
    
    rep(i,v){
        rep(j,v){
            if(j)cout<<" ";
            int res=d[i][j];
            if(res>=INF/2)cout<<"INF";
            else cout<<res;
        }
        cout<<endl;
    }
}