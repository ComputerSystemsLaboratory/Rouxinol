//#include "bits/stdc++.h"
//using namespace std;
//typedef long long ll;
//typedef pair<int,int> pii;
//#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
//#define all(a)  (a).begin(),(a).end()
//#define pb push_back
//#define INF 999999999
//

#include "bits/stdc++.h"
using namespace std;
typedef pair<int,int> pii;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define MAX_N 10001
#define INF 999999999

vector<pii> G[MAX_N];

int prim(int n){    //n : ???????????°
    bool used[MAX_N];
    int mincost[MAX_N];
    
    rep(i,n){
        mincost[i]=INF;
        used[i]=false;
    }
    mincost[0]=0;
    int res=0;
    
    while(1){
        int v=-1;
        rep(u,n){
            if(used[u]==false && ( v==-1 || mincost[u]<mincost[v] ))
                v=u;
        }
        if(v==-1)break;
        used[v]=true;
        res+=mincost[v];
        
        rep(i,G[v].size()){
            int u = G[v][i].first;
            mincost[u] = min( mincost[u] , G[v][i].second);
        }
    }
    return res;
}

int main(){
    int v,e;
    cin>>v>>e;
    rep(i,e){
        int a,b,c;
        cin>>a>>b>>c;
        G[a].push_back(pii(b,c));
        G[b].push_back(pii(a,c));
    }
    cout<<prim(v)<<endl;
}