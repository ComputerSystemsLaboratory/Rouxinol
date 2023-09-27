#include<bits/stdc++.h>
using namespace std;
int n;
int a[101][101];
int d[101];

void bfs(int s){
	queue<int>q;
	q.push(s);
	memset(d,-1,sizeof(d));
	d[s]=0;
	int u;
	while(!q.empty()){
		u=q.front();
		q.pop();
		for(int v=0;v<n;v++){
			if(a[u][v]==0)continue;
			if(d[v]!=-1)continue;
			d[v]=d[u]+1;
			q.push(v);
		}
	} 
	for(int i=0;i<n;i++){
		cout<<i+1<<" "<<d[i]<<endl;
	}
}

int main(){
	cin>>n;
	memset(a,0,sizeof(a));
	int u,k,v;
	for(int i=0;i<n;i++){
		cin>>u>>k;
		u--;
		for(int j=0;j<k;j++){
			cin>>v;
			v--;
			a[u][v]=1;
		}
	}
	bfs(0);
}
