#include<iostream>
#include<string.h>
using namespace std;
#define WHITE 0
#define GLAY 1
#define BLACK 2
#define INFTY 1000000
int MAP[100][100],color[100],d[100];
int main()
{
	memset(MAP,INFTY,sizeof(MAP));
	int n,u,k,v,c;
	int minv;
	cin >> n ;
	for(int i = 0; i < n; i++){
		cin >> u >> k;
		for(int j = 0; j < k; j++){
			cin >> v >> c;
			MAP[u][v] = c;
		}
	}
	for(int i=0;i<n;i++){
		d[i] = INFTY;
		color[i] = WHITE;
	}
	d[0] = 0;
	color[0] = GLAY;
	while(1){
		minv = INFTY;
		int u = -1;
		for(int i=0;i<n;i++){
			if(minv > d[i] && color[i] != BLACK ){
				u = i;
				minv = d[i];
			}
		}
		if(u == -1) break;
		color[u] = BLACK;
		for(int v=0;v<n;v++){
			if(color[v] != BLACK && MAP[u][v] != INFTY){
				if(d[v] > d[u] + MAP[u][v]){	//d[v]:??????
					d[v] = d[u] + MAP[u][v];
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		cout << i << " " << ( d[i]==INFTY ? -1 : d[i]) << endl;
	}
 	return 0;
}