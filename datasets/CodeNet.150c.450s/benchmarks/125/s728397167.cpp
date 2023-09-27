#include <iostream>
#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
using namespace std;


int n,m[N][N];
int color[N],d[N],f[N],tt;

void dfs_visit(int u){
	int v;
	color[u]=GRAY;
	d[u] = ++tt;
	for(v=0;v<n;v++){
		if(m[u][v]&&color[v]==WHITE)
		dfs_visit(v);
	}
	color[u] = BLACK;
	f[u] = ++tt;
	
}

void dfs(){
	int u;
	
	for(u=0;u<n;u++){
		color[u]=WHITE;
	}
	tt=0;
	for(u=0;u<n;u++){
		if(color[u]==WHITE){
			dfs_visit(u);
		}
		}
			for(int i=0;i<n;i++){
			cout<<i+1<<" "<<d[i]<<" "<<f[i]<<endl;
		}
	}



int main(){
	int u,k,v;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			m[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		cin>>u>>k;
		u--;
		for(int j=0;j<k;j++){
			cin>>v;
			v--;
			m[u][v]=1;
		}
	}
	
	dfs();
	return 0;
}