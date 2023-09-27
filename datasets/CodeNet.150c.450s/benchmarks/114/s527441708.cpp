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

using namespace std;

int main()
{
	int N;
	int maxcost=0;
	vector<pair<int,int> > cost;
	cin>>N;
	vector<int> parent(N,-1);
	pair<int,int> ddata;
	for(int i=0;i<N*N;i++){
		cin>>ddata.first;
		if(ddata.first!=-1){
			ddata.second=i;
			cost.push_back(ddata);
		}
	}
	sort(cost.begin(),cost.end());
	for(int i=0;i<cost.size();i++){
		while(parent[cost[i].second/N]!=-1&&parent[parent[cost[i].second/N]]!=-1){
			parent[cost[i].second/N]=parent[parent[cost[i].second/N]];
		}
		while(parent[cost[i].second%N]!=-1&&parent[parent[cost[i].second%N]]!=-1){
			parent[cost[i].second%N]=parent[parent[cost[i].second%N]];
		}
		if(parent[cost[i].second/N]!=cost[i].second%N&&parent[cost[i].second%N]!=cost[i].second/N&&(parent[cost[i].second%N]!=parent[cost[i].second/N]||parent[cost[i].second/N]==-1||parent[cost[i].second%N]==-1)){
			//cout<<' '<<cost[i].second/N<<' '<<cost[i].second%N<<endl;
			maxcost+=cost[i].first;
			if(parent[cost[i].second/N]==-1){
				if(parent[cost[i].second%N]!=-1){
					parent[parent[cost[i].second%N]]=cost[i].second/N;
				}
				parent[cost[i].second%N]=cost[i].second/N;
			}else if(parent[cost[i].second%N]==-1){
				parent[parent[cost[i].second/N]]=cost[i].second%N;
				parent[cost[i].second/N]=cost[i].second%N;
			}else{
				parent[parent[cost[i].second%N]]=parent[cost[i].second/N];
				parent[cost[i].second%N]=parent[cost[i].second/N];
			}
		}
		int c=0;
		for(int i=0;i<N;i++){
			if(parent[i]==-1){
				c++;
			}
		}
		if(c<2){
			break;
		}
	}
	cout<<maxcost<<endl;
	/*
	for(int i=0;i<N;i++){
		cout<<parent[i]<<endl;
	}//*/
	return 0;
}