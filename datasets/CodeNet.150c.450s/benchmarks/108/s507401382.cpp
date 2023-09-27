#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//breadth first search

int main() {
	int n, u, k, v;
	vector< vector< int > > list;
	vector< int > dist;
	queue< int > que;
	
	cin >> n;
	list.resize(n);
	dist.resize(n);
	
	for(int i=0;i<n;++i){
		cin >> u >> k;
		dist[i] = -1;
		
		for(int j=0;j<k;++j){
			cin >> v;
			list[u-1].push_back(v-1);
		}
	}
	
	que.push(0);
	dist[0] = 0;
	
	while(!que.empty()){
		int cur = que.front();
		vector< int > branch = list[cur];
		que.pop();
		
		for(vector< int >::iterator it=branch.begin();it<branch.end();++it){
			if(dist[*it] == -1){
				que.push(*it);
				dist[*it] = dist[cur] + 1;
			}
		}
	}
	
	for(int i=0;i<n;++i){
		cout << i+1 << " " << dist[i] << endl;
	}
	
	return 0;
}