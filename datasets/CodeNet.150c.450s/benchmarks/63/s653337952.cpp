#include<iostream>
#include<vector>
using namespace std;

const int MAXV=100000;
const int MAXE=500000;
const long long INF=1e18;
//vector<int>G[MAXV]

struct edge {int from,to,cost;};

edge es[MAXE];
long long d[MAXV];
int V,E;

int main(){
    cin>>V>>E;int r;cin>>r;
    for(int i=0;i<E;i++){
        int s,t,dd;
        cin>>s>>t>>dd;
        es[i].from=s;
        es[i].to=t;
        es[i].cost=dd;
    }
    for(int i=0;i<V;i++)d[i]=INF;
    d[r]=0;
    while(true){
        bool update = false;
        for(int i=0;i<E;i++){
            edge e=es[i];
            if(d[e.from] != INF && d[e.to]>d[e.from]+e.cost){
                d[e.to]=d[e.from]+e.cost;
                update = true;
            }
        }
        if(!update)break;
    }
    
    for(int i=0;i<V;i++){
        if(d[i]==INF)cout<<"INF"<<endl;
        else cout<<d[i]<<endl;
    }
    
    return 0;
    
    
}
/*
2 1 0
0 1 7
*/
