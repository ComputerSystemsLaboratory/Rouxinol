#include  <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;

const int vmax=1000010;
const int inf=1023456789;

int N,M;
struct node{int to,cost;};
vector<node> graph[vmax];

typedef tuple<int,int> state;
int dist[vmax];
bool used[vmax];

int prim(){
	rep(i,N)dist[i]=inf,used[i]=false;
	dist[0]=0;
	int res=0;
	priority_queue<state,vector<state>,greater<state>> q;
	q.push(state(0,0));
	while(!q.empty()){
		int c,v;tie(c,v)=q.top();q.pop();
		if(used[v]) continue;
		res+=dist[v];
		used[v]=true;
		for(auto &e:graph[v]){
			int nc=e.cost;
			int nv=e.to;
			if(used[nv]) continue;
			if(dist[nv]>nc){
				dist[nv]=nc;
				q.push(state(nc,nv));
			}
		}
	}
	return res;
}

int main(void){
	cin >> N >> M;
	rep(i,M){
		int a,b,c;
		cin >> a >> b >> c;
		graph[a].push_back({b,c});
		graph[b].push_back({a,c});
	}
	cout << prim() << endl;
	return 0;
}