#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int n;
int G[10010][10010];
int minlen[10010];
bool vis[10010];


void dijkstra(int p){
	memset(minlen,-1,sizeof(minlen));
	memset(vis,0,sizeof(0));
	
	minlen[p] = 0;
	
	while (1){
		int minp = -1;
		int minn = 1<<30;
	
		for(int i = 0 ; i<n ; i++){
			if(!vis[i] && minlen[i]!=-1 && minn>minlen[i]){
				minp = i;
				minn = minlen[i];
			}
		}
		if(minp == -1) break;
		
		vis[minp] = 1;
		for(int j = 0 ; j<n ; j++){
			if(!vis[j] && G[minp][j]!=1<<30){
				if(minlen[j] == -1){
					minlen[j] = minlen[minp]+G[minp][j];
				}
				else if( minlen[j] > minlen[minp]+G[minp][j]){
					minlen[j] = minlen[minp]+G[minp][j];
				}
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i = 0 ; i<n ; i++)
		for(int j = 0 ; j<n ; j++)
			G[i][j] = 1<<30;
	
	for(int t = 0 ; t<n ; t++){
		int u,k;
		cin>>u>>k;
		for(int i = 0 ; i<k ; i++){
			int to,weight;
			cin>>to>>weight;
			G[u][to] = weight;
		}
	}

	dijkstra(0);	
	for(int i = 0 ; i<n ; i++){
		cout<<i<<" "<<minlen[i]<<endl;
	}
	return 0;
}


