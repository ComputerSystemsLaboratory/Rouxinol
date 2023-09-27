#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int N;
int G[110][110];
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
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				if(j!=N-1){
				cout << G[i][j] << " ";
				}else{
					cout << G[i][j] << endl;
				}
			}
		}
	}
}

