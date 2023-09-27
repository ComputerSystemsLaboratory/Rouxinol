#include <bits/stdc++.h>
using namespace std;
static const int M=10000;
static const int INF=(1<<20);
int n;
vector<pair<int,int > > a[M];
void dijkstra(){
	priority_queue<pair<int,int> > Q;
	int col[M];
	int d[M];
	for(int i=0;i<n;i++){
		col[i]=0;
		d[i]=INF;
	}
	d[0]=0;col[0]=1;
	Q.push(make_pair(0,0));
	while(!Q.empty()){
		pair<int,int>f=Q.top();Q.pop();
		int u=f.second;col[u]=2;
		if(d[u]<f.first*(-1))continue;
		for(int j=0;j<a[u].size();j++){
			int v=a[u][j].first;
			if(col[v]==2)continue;
			if(d[v]>d[u]+a[u][j].second){
				d[v]=d[u]+a[u][j].second;
				Q.push(make_pair(d[v]*(-1),v));
				col[v]=1;
			}
		}
	}
	for(int i=0;i<n;i++)cout<<i<<' '<<(d[i]==INF?-1:d[i])<<endl;
}
int main() {
	int k,u,v,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>u>>k;
		for(int j=0;j<k;j++){
			cin>>v>>c;
			a[u].push_back(make_pair(v,c));
		}
	}
	dijkstra();
}