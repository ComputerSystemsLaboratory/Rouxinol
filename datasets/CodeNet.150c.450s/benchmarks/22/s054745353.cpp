#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <queue>
using namespace std;

typedef pair<long long,long long> P;

int v,e,r;
bool f[1010];

struct edge{
    int to;
    long long cost;
    edge(int _to,long long _cost):to(_to),cost(_cost){}
};

vector<edge> G[1010];
long long d[1010];

bool bellman_ford(int start){
    for(int i=0;i<v;i++){
        d[i]=1e12;
    }
    d[start]=0;
    f[start]=1;
    
    for(int i=0;i<v;i++){
        bool update=false;
        
        for(int j=0;j<v;j++){
            int from=j;
            
            if(!f[from])continue;
            
            for(int k=0;k<G[from].size();k++){
                edge e=G[j][k];
                
                if(d[from]!=1e12&&d[e.to]>d[from]+e.cost){
                    f[e.to]=1;
                    d[e.to]=d[from]+e.cost;
                    update=true;
                }
            }
        }
        if(update==false)break;
        if(i==v-1)return true;
    }
    return false;
}

int main(void){
    cin>>v>>e>>r;
    for(int i=0;i<e;i++){
        int s,t,d;
        cin>>s>>t>>d;
        G[s].push_back(edge(t,d));
    }
    
    if(bellman_ford(r)){
        cout<<"NEGATIVE CYCLE"<<endl;
        return 0;
    }
    
    for(int i=0;i<v;i++){
        if(d[i]!=1e12)cout<<d[i]<<endl;
        else cout<<"INF"<<endl;
    }
    return 0;
}