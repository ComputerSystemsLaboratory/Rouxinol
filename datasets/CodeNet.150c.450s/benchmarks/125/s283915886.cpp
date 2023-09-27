#include<iostream>
#include<string>
#include<algorithm>
#include<utility>
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

vector<int> g[100];
int ans[100][2]; //[i][0] 到着　　[i][1] 終了
int used[100];
int t=1;

void dfs(int v){
	//cout << "初　点" << v+1 << "  " << t << "\n";
	used[v] = 1;
	ans[v][0] = t;
	t++;
	if(g[v].size() == 0){
	//	cout << "　　点" << v+1 << "  " << t << "\n";
	}
	else{
		for(int i=0;i<g[v].size();i++){
			if(!used[g[v][i]]) dfs(g[v][i]);
			//t++;
	//		cout << "　　点" << v+1 << "  " << t << "\n";
		}
	}
	ans[v][1] = t;
	t++;
	return;
}

int main(){
	//ios::sync_with_stdio(false);
	//cin.tie(0);

	int n;
	cin >> n;
	
	for(int i=0;i<n;i++){
		int u, nume;
		cin >> u >> nume;

		int v;
		for(int j=0;j<nume;j++){ //jは回数数えるだけ
			cin >> v;
			g[u-1].push_back(v-1);
		}
	}

//	for(int i=0;i<n;i++){
//		for(int j=0;j<g[i].size();j++){
//			cout << g[i][j] + 1 << " ";
//		}
//		cout << "\n";
//	}

//	cout << "\n";
	for(int i=0;i<n;i++){
		if(!used[i]){
			dfs(i);
		}
	}

//	cout << "\n";
	
	for(int i=0;i<n;i++){
		cout << i+1 << " " << ans[i][0] << " " << ans[i][1] << "\n";
	}

	return 0;
}
