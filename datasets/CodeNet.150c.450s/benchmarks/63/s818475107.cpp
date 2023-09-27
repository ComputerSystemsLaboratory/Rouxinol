#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> ls[100000];
int cost[100000];
int main(){
	int v,e,r;	cin>>v>>e>>r;
	for(int i=0;i<e;i++){
		int s,t,d;	cin>>s>>t>>d;
		ls[s].push_back(make_pair(t,d));
	}
	for(int i=0;i<100000;i++)	cost[i]=INT_MAX;
	cost[r]=0;
	priority_queue<pair<int,int>> pq;
	pq.push(make_pair(0,r));
	while(!pq.empty()){
		auto cur=pq.top();	pq.pop();
		int dist=-cur.first,now=cur.second;
		if(dist>cost[now])	continue;
		for(int i=0;i<(int)ls[now].size();i++){
			int to=ls[now][i].first,d=ls[now][i].second;
			if(dist+d<cost[to]){
				cost[to]=dist+d;
				pq.push(make_pair(-cost[to],to));
			}
		}
	}
	for(int i=0;i<v;i++){
		if(cost[i]==INT_MAX)	cout<<"INF"<<endl;
		else 	cout<<cost[i]<<endl;
	}
	return 0;
}