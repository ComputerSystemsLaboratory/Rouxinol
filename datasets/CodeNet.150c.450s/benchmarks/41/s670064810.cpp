#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1000000007;
#define INF 1LL<<30
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()

ll d[110][110];

int main(){
    int v,e;
    cin>>v>>e;
    rep(i,v){
        rep(j,v){
            if(i==j) d[i][j]=0;
            else d[i][j]=1LL<<60;
        } 
    }

    

    rep(i,e){
        int s,t;
        ll c;
        cin>>s>>t>>c;
        d[s][t]=c;
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
            if(j) cout<<" ";
            if(d[i][j]<(1LL<<60)/2) cout<<d[i][j];
            else cout<<"INF";
        }
        cout<<endl;
    }

    return 0;
}


 
