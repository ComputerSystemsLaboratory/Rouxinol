#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int MAX =1e6+6;
const long long int inf=INT_MAX;
vector<pair<long long int , long long int > >adj[MAX];
int n,m ;
multiset<pair<long long int, long long int> >q;
long long int dis[MAX];
void init(int n){
	for(int i=0;i<n;i++){
		dis[i]=inf;
	}
}
void shortest_paths(int s){
	int i,j,k;
	dis[s]=0;
	q.insert(make_pair(0,s));
	while(!q.empty()){
		pair<long long int , long long int >p=*q.begin();
		int u=p.second;
		//int d=p.second;
		q.erase(*q.begin());
		for(int i=0;i<adj[u].size();i++){
			int v=adj[u][i].first;
			int d=adj[u][i].second;
			if(dis[v]>dis[u]+d){
				dis[v]=dis[u]+d;
				q.insert(make_pair(dis[v],v));
			}
		}

	}

}
int main(){
	long long int i,j,k, n ,m,s;
	cin>>n>>m>>s;
	for(i=0;i<m;i++){
		long long int x,y,z;
		scanf("%lld %lld %lld" , &x, &y, &z);
		adj[x].push_back(make_pair(y,z));
		//adj[y].push_back(make_pair(x,z));
	}
	init(n);
	shortest_paths(s);
	for(i=0;i<n;i++){
		if(dis[i]==inf)
			cout<<"INF"<<"\n";
		else
		printf("%lld\n" , dis[i]);
	}

}
