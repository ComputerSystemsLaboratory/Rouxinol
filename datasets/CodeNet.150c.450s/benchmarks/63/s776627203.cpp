#include "bits/stdc++.h"
using namespace std;
typedef long long lint;

#define MAXN 100010
//d,edge,g,P,q
lint d[MAXN];
struct edge{
        int to;
        lint cost;
};
vector<edge> g[MAXN];
typedef pair<lint,int> P;
priority_queue<P,vector<P>,greater<P> > q;

void pfs(int s){
        d[s]=0;q.push({0,s});
        lint cd,v;
        while(q.size()){
                cd=q.top().first;v=q.top().second;q.pop();
                if(cd>d[v])continue;
                for(edge &e:g[v])if(d[e.to]>cd+e.cost){
                        d[e.to]=cd+e.cost;
                        q.push({d[e.to],e.to});
                }
        }
}

#define rep(i,n) for(int i=0;i<(n);++i)

int main(){
        lint v,e,r;cin>>v>>e>>r;
        rep(i,v)d[i]=INT_MAX;
        int a,b;lint c;
        rep(i,e){
                cin>>a>>b>>c;
                g[a].push_back({b,c});
        }pfs(r);
        rep(i,v){
                if(d[i]==INT_MAX)cout<<"INF"<<endl;
                else cout<<d[i]<<endl;
        }
}
