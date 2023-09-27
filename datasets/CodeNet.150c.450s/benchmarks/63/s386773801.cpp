#include <numeric>
#include<iostream>
#include<set>
#include<queue>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
#include <sstream>
#include<string>
#include <cmath>
#include <iomanip>
#include <string>
#include<list>
using namespace std;
#define inf 1000000007
#define int long long
#define rep(i,j,n) for(int i=j;i<n;i++)
typedef pair<int,int>  P;
struct edge{int to,cost;};
double pi = 3.141592653589793;
//使うやつはここから下に置こうな
vector<edge> G[100005];
int d[114514];
int v,e,r;
void dijkstra(int k){
    priority_queue<P,vector<P>,greater<P> >que;
    fill(d,d+114000,inf);
    d[k]=0;
    que.push(P(0,k));
    while(!que.empty()){
        P p=que.top();que.pop();
        int v=p.second;
        if(d[v]<p.first)continue;
        for(int i=0;i<G[v].size(); i++){
            edge e=G[v][i];
            if(d[e.to]>d[v]+e.cost){
                d[e.to]=d[v]+e.cost;
                que.push(P(d[e.to],e.to));
            }
        }
    }
}
signed main(){
    cin>>v>>e>>r;
    rep(i,0,e){
        int a,b,c;cin>>a>>b>>c;
        G[a].push_back(edge{b,c});
    }
    dijkstra(r);
    rep(i,0,v){
        if(d[i]==inf)cout<<"INF"<<endl;
        else cout<<d[i]<<endl;
    }
    return 0;
}
