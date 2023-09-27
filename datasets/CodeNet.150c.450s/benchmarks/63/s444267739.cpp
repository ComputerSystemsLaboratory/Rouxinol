#include<iostream>
#include<vector>
#include<functional>
#include<queue>
#include<algorithm>
using namespace std;
vector<pair<int,int>>x[300000];
int n,m,s,a,b,c,dist[300000],dist2[500][500];
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > Q;
void dijkstra(int V,int E,int s) {
	for(int i=0;i<V;i++)dist[i]=999999999;
	dist[s]=0;Q.push(make_pair(0,s));
	while(!Q.empty()){
		int a1=Q.top().first,a2=Q.top().second;Q.pop();
		for(int i=0;i<x[a2].size();i++){
			if(dist[x[a2][i].first]>a1+x[a2][i].second){
				dist[x[a2][i].first]=a1+x[a2][i].second;
				Q.push(make_pair(dist[x[a2][i].first],x[a2][i].first));
			}
		}
	}
}
int main(){
	int s;
	cin>>n>>m;cin>>s;
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;x[a].push_back(make_pair(b,c));
	}
	/*for(int i=0;i<n;i++){
		dijkstra(n,m,i);
		for(int j=0;j<n;j++)dist2[i][j]=dist[j];
	}
	int q;cin>>q;
	for(int i=0;i<q;i++){
		cin>>a>>b;a--;b--;
		if(dist2[a][b]>=999999999)cout<<"-1"<<endl;
		else cout<<dist2[a][b]<<endl;
	}*/
	dijkstra(n,m,s);
	for(int i=0;i<n;i++){
		if(dist[i]==999999999)cout<<"INF"<<endl;
		else cout<<dist[i]<<endl;
	}
	return 0;
}