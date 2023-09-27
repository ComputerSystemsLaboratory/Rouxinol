#include <queue>
#include <vector>
#include <iostream>
using namespace std;
int N;
int D[110];
int G[110][110];
void bfs(int src){
	queue<int> Q;
	Q.push(src);
	D[src] = 0;
	while(!Q.empty()){
		int cur = Q.front();
		Q.pop();
		for(int i=0;i<N;i++){
			if(G[cur][i] && D[i]==0){
				D[i] = D[cur]+1;
				Q.push(i);
			}
		}
	}
	for(int i=0;i<N;i++){
		if(i!=src && D[i]==0) D[i]=-1;
	}
	D[src]=0;
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
		bfs(0);
		for(int i=0;i<N;i++){
			cout << i+1 << " " << D[i] << endl;
		}
	}
}

#if 0
無限ループに陥らないようにするのに少し苦労した。プログラム上では番号を0から始めたのもよくないかもしれない。
#endif
