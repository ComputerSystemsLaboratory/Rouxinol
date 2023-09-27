#include <iostream>
#include <cstdio>
#include <string>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>
#include <vector>
#include <map>
#include <bitset>

using namespace std;

int main()
{
	int N;
	cin>>N;
	
	vector<vector<int> > cost(N,vector<int>(N,10000001));
	cost[0][0]=0;
	pair<int,int> ddata;
	for(int i=0;i<N;i++){
		int u,k;
		cin>>u>>k;
		for(int j=0;j<k;j++){
			cin>>ddata.first>>ddata.second;
			cost[u][ddata.first]=ddata.second;
		}
	}
	//
	
	vector<int> maxcost(N,10000001);
	
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > que;
	
	que.push(pair<int,int>(0,0));
	
	while(!que.empty()){
		int n=que.top().second;
		if(que.top().first<maxcost[n]){
			maxcost[n]=que.top().first;
		}
		for(int j=1;j<N;j++){
			if(que.top().first+cost[n][j]<maxcost[j]){
				maxcost[j]=que.top().first+cost[n][j];
				ddata.first=que.top().first+cost[n][j];
				ddata.second=j;
				que.push(ddata);
			}
		}
		que.pop();
	}
	
	for(int i=0;i<N;i++){
		cout<<i<<' '<<maxcost[i]<<endl;
	}
	return 0;
}