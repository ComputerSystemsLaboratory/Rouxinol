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
#define MAX_V 100001
#define INF 999999999

struct edge{int to,cost;};
vector<edge> G[MAX_V];
int d[MAX_V];

void dijkstra(int s,int V){
    priority_queue< pii,vector<pii>,greater<pii> > que;
    rep(i,V)d[i]=INF;
    d[s]=0;
    que.push(pii(0,s));
    
    while(que.size()){
        pii p=que.top();
        que.pop();
        
        int v=p.second;
        if(d[v]<p.first)continue;
        
        rep(i,G[v].size()){
            edge e=G[v][i];
            if(d[e.to]>d[v]+e.cost){
                d[e.to]=d[v]+e.cost;
                que.push(pii(d[e.to],e.to));
            }
        }
    }
}

int main(){
    int v,e,r;
    cin>>v>>e>>r;
    rep(i,e){
        int s,t,d;
        cin>>s>>t>>d;
        G[s].push_back(edge{t,d});
    }
    dijkstra(r,v);
    rep(i,v){
        if(d[i]==INF)   cout<<"INF"<<endl;
        else            cout<<d[i]<<endl;
    }
}