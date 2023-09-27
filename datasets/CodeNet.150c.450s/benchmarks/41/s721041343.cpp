#include<iostream>
#define INF 100000000000000
#define MAXN 1000+10
using namespace std;
long long dist[MAXN][MAXN];
int main(){
	int i,j,k,n,m,a,b;
	
	cin>>n>>m;
	for (i = 0;i < n;++i){
		for (j = 0;j < n;++j){
			if (i != j) {
				dist[i][j]=INF;
			}
		}
	}
	
	for (i = 0;i < m;++i){
		cin>>a>>b;
		cin>>dist[a][b];
	}
	
	for (k = 0;k < n;++k){
		for (i = 0;i < n;++i){
			for (j = 0;j < n;++j){
				if (dist[i][k] != INF && dist[k][j] != INF)dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
			}
		}
	}
	
	for (i = 0;i < n;++i){
		if (dist[i][i] < 0) {
			cout<<"NEGATIVE CYCLE"<<endl;
			return 0;
		}
	}
	
	for (i = 0;i < n;++i){
		for (j = 0;j < n;++j){
			if (j) cout<<" ";
			if (dist[i][j] == INF) cout<<"INF";
			else cout<<dist[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}