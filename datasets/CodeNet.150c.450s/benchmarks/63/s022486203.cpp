#include<bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
struct edge{int to;ll cost;};
typedef pair<ll,int> P;
const ll INF=100000000000LL;
const ll MOD=1000000007LL;
const ll MAX=100010;
vector<edge> G[100010];
ll d[100010];
int n;
void dijkstra(int s){
    priority_queue<P,vector<P>,greater<P> >que;
    fill(d,d+n+1,INF);
    d[s]=0;
    que.push(P(0,s));
    while(!que.empty()){
        P p=que.top();
        que.pop();
        int v=p.second;
        if(d[v]<p.first){
            continue;
        }
        for(int i=0;i<(int)G[v].size();i++){
            edge e=G[v][i];
            if(d[e.to]>d[v]+e.cost){
                d[e.to]=d[v]+e.cost;
                que.push(P(d[e.to],e.to));
            }
        }
    }
}
int main(){
	int m,r;
	cin>>n>>m>>r;
	for(int i=0;i<m;i++){
		int a,b;ll c;
		cin>>a>>b>>c;
		G[a].pb({b,c});
	}
	dijkstra(r);
	for(int i=0;i<n;i++){
        if(d[i]==INF){
            cout<<"INF"<<endl;
            continue;
        }
		cout<<d[i]<<endl;
	}
	return 0;
}

