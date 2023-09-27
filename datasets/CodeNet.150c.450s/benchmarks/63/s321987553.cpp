#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<algorithm>
#include<functional>
#include<utility>
#include<bitset>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<cstdio>

using namespace std;

#define REP(i,n) for(int i=0;i<int(n);i++)
#define foreach(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
typedef long long ll;
typedef pair<int,int> P;

int V,E,r;
const int INF=1e9;

struct edge{int to,cost;};
vector<edge> G[100010];
int d[100010];

void dijkstra(int s) {
    priority_queue<P,vector<P>,greater<P> > que;
    fill(d,d+V,INF);
    d[s]=0;
    que.push(P(0,s));
    while(!que.empty()){
        P p=que.top();  que.pop();
        int v=p.second;
        if(d[v]<p.first) continue;
        for(int i=0;i<G[v].size();i++){
            edge e=G[v][i];
            if(d[e.to]>d[v]+e.cost){
                d[e.to]=d[v]+e.cost;
                que.push(P(d[e.to],e.to));
            }
        }
    }
}

int main(void){
	int i;

	cin >> V >> E >> r;
	for(i=0;i<E;i++){
		int s,t,d;
		cin >> s >> t >> d;
		edge e;
		e.to=t;  e.cost=d;
		G[s].push_back(e);
	}

	dijkstra(r);
	for(i=0;i<V;i++){
		if(d[i]!=INF) cout << d[i] << endl;
		else cout << "INF" << endl;
	}
	 return 0;
}