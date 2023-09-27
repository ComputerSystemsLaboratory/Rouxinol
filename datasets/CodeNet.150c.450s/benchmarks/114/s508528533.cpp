#include <iostream>
#include <queue>
#include <utility>
#include <functional>
#include <vector>
using namespace std;
int cost[100][100];
int prim(int n,int s){
	typedef pair<int,int> P;
	bool ischeck[n];
	int mincost = 0;
	priority_queue<P,vector<P>,greater<P> > pq;
	P p,tp;
	for(int i = 0;i < n;++i){
		ischeck[i] = false;
		if(cost[s][i] != -1){
			p.first = cost[s][i];
			p.second = i;
			pq.push(p);
		}
	}
	ischeck[s] = true;
	while(!pq.empty()){
		p = pq.top();
		pq.pop();
		if(ischeck[p.second]) continue;
		else{
			ischeck[p.second] = true;
			mincost += p.first;
			for(int i = 0;i < n;++i){
				if(cost[p.second][i] != -1){
					tp.first = cost[p.second][i];
					tp.second = i;
					pq.push(tp);
				}
			}
		}
	}
	return mincost;
}
int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;++i){
		for(int j = 0;j < n;++j){
			cin >> cost[i][j];
		}
	}
	cout << prim(n,0) << endl;
}