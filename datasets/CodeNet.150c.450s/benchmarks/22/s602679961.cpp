#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()
const int mod=1000000007,MAX=1001;
const ll INF=1LL<<60;

vector<pair<int,ll>> S[MAX];
ll dis[MAX];
int N;

bool bell(int u){
    for(int i=0;i<N;i++){
        dis[i]=INF;
    }
    dis[u]=0;

    for(int k=0;k<N;k++){
        for(int i=0;i<N;i++){
            for(int j=0;j<S[i].size();j++){
                int a=S[i][j].first;
                ll b=S[i][j].second;
                if(dis[i]!=INF&&dis[a]>dis[i]+b){
                    dis[a]=dis[i]+b;
                    if(k==N-1) return true;
                }
            }
        }
    }

    return false;

}

int main(){
    
    int E,r;cin>>N>>E>>r;
    for(int i=0;i<E;i++){
        int a,b;
        ll c;cin>>a>>b>>c;
        S[a].push_back(make_pair(b,c));
    }

    if(bell(r)) cout<<"NEGATIVE CYCLE"<<endl;
    else{
        for(int i=0;i<N;i++){
            if(dis[i]!=INF) cout<<dis[i]<<endl;
            else cout<<"INF"<<endl;
        }
    }
}


