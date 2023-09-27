#include<iostream>
#include<string>
#include<algorithm>
#include<utility>
#include<numeric>
#include<vector>
#include<map>
#include<set>
#include<tuple>
#include<stack>
#include<queue>
#include<functional>
#include<iterator>
#include<cmath>

using namespace std;

typedef pair<int,int> P;


int main(){
	int n;
	cin >> n;

	vector<int> es[n];
	int u,k;
	for(int i=0;i<n;i++){
		cin >> u >> k;
		int v;
		for(int j=0;j<k;j++){
			cin >> v;
			es[i].push_back(v-1);
		}
	}

	int d[n];
	fill(d,d+n,-1);
	queue<P> que;
	que.push(P(0,0)); //点番号（0オリジン）、距離
	d[0] = 0;
	while(!que.empty()){
		P t = que.front(); que.pop();
		for(int i=0;i<es[t.first].size();i++){
			if(d[es[t.first][i]] == -1){
				que.push(P(es[t.first][i],t.second+1));
				d[es[t.first][i]] = t.second+1;
			}
		}
	}

	for(int i=0;i<n;i++){
		cout << i+1 << " " << d[i] << "\n";
	}
	return 0;
}
