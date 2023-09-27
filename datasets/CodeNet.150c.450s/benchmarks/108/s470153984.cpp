#include <iostream>
#include <queue>
#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
using namespace std;
int m[N][N],color[N],d[N],n;



void bfs(int s){
	
	queue<int> q;
	q.push(s);
	for(int i=0;i<N;i++){
		color[i] = WHITE;
		d[i] = (1<<21);
	}
	d[s] = 0;
	color[s] = GRAY;
	int u;
	while(!q.empty()){
		u = q.front();
		q.pop();
		
		for(int v=0;v<n;v++){
			if(m[u][v]&&color[v]==WHITE){
				color[v] = GRAY;
				d[v] = d[u]+1;
				q.push(v);
			}
		}
	}
	for(int i=0;i<n;i++){
			cout<<i+1<<" "<<((d[i]==(1<<21))?(-1):(d[i]))<<endl; 
		}
}
	
	int main(){
		int u,v,k;
		
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>u>>k;
			u--;
			for(int j=0;j<k;j++){
				cin>>v;
				v--;
				m[u][v]=1;
			}
		}
		bfs(0);
		
		return 0;
}