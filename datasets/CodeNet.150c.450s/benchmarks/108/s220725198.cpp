#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 100000000;

int main(){
	int n;
	cin >> n;
	vector<vector<int>> node(n+1);
	for(int i=0;i<n;i++){
		int u,k,tmp;
		cin >> u >> k;
		for(int j=0;j<k;j++){
			cin >> tmp;
			node[u].push_back(tmp);
		}
	}
	
	//search
	vector<int> res(n+1,INF);
	queue<int> que;
	queue<int> copied;
	queue<int> zeros;
	que.push(1);
	
	int count = 0;
	for(int i=0;i<n;i++){
		while(que.size()){
			int k = que.front(); que.pop();
			//cout << "-> " << k << endl;
			if(res[k] >= INF) res[k] = count;
			for(int v:node[k]){
				if(res[v] >= INF) copied.push(v);
			}
		}
		count++;
		que = queue<int>(copied);
		copied = queue<int>(zeros);
	}

	//output
	for(int i=1;i<=n;i++){
		if(res[i] >= INF) res[i] = -1;
		cout << i << " " << res[i] << endl;
	}

	return 0;
}