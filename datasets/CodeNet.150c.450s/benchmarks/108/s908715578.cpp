#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> G(n,-1);
	vector<vector<int>> vs(n);
	int u,k,v;
	for(int loop=0;loop<n;loop++){
		cin >> u >> k;
		for(int loop2=0;loop2<k;loop2++){
			cin >> v;
			vs[u-1].push_back(v-1);
		}
	}
	queue<pair<int,int>> Q;
	Q.push(make_pair(0,0));
	G[0]=0;
	int lk,dist;
	while(!Q.empty()){
		lk = Q.front().first;
		dist = Q.front().second;
		Q.pop();
		for(int loop=0;loop<vs[lk].size();loop++){
			if(G[vs[lk][loop]]==-1){
				G[vs[lk][loop]]=dist+1;
				Q.push(make_pair(vs[lk][loop],dist+1));
			}
		}
	}
	for(int loop=0;loop<n;loop++){
		cout << loop+1 << " " << G[loop] << endl;
	}
	return 0;
}
