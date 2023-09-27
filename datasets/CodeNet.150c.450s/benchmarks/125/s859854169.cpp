#include <iostream>
#include <vector>
using namespace std;

int N;
int D[110];
int G[110][110];
int F[110];
int t = 1;
void dfs(int cur){
	D[cur] = t;
	t++;
	for(int i=0;i<N;i++){
		if(G[cur][i] && D[i]==0){
			dfs(i);
		}
	}
	F[cur] = t;
	t++;
}


int main(){
	while(cin >> N && N>0){
		vector<vector<int> > g(110,vector<int>(110,0));
		int u,k;
		for(int i=0;i<N;i++){
			cin >> u >> k;
			for(int j=0;j<k;j++){
				int a;
				cin >> a;
				g[u-1].push_back(a); 
			}
		}
		for(int i=0;i<N;i++){
			for(int j=0;j<g[i].size();j++){
				int f = g[i][j];
				G[i][f-1] = 1;
			}
		}
		dfs(0);
		for(int i=0;i<N;i++){
			if(D[i]==0){
				dfs(i);
			}
		}
		for(int i=0;i<N;i++){
			cout << i+1 << " " << D[i]  << " " << F[i] << endl;
		}
	}
}

