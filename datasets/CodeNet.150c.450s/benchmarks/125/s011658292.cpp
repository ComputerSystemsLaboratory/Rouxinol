#include<iostream>
#include<algorithm>
#include<cstdio>
#include<stack>

#define N 100

using namespace std;

int n;
int unvisited=0,visited=1,comp_visited=2;
int M[N][N],state[N],nt[N];
int d[N],f[N],t;

int next(int u){
	for(int v=nt[u];v<n;v++){
		nt[u]=v+1;
		if(M[u][v]) return v;
	}
	return -1;
}

void dfs_visit(int r){
	for(int i=0;i<n;i++){
		nt[i]=0;
	}
	stack<int> s;
	s.push(r);
	state[r]=visited;
	t++;
	d[r]=t;
	
	while(!s.empty()){
		int u=s.top();
		int v=next(u);
		if(v!=-1){
			if(state[v]==unvisited){
				state[v]=visited;
				t++;
				d[v]=t;
				s.push(v);
			}
		}
		else{
			s.pop();
			state[u]=comp_visited;
			t++;
			f[u]=t;
		}
	}
}

void dfs(){
	for(int i=0;i<n;i++){
		state[i]=unvisited;
		nt[i]=0;
	}
	t = 0;
	for(int u=0;u<n;u++){
		if(state[u]==unvisited) dfs_visit(u);
	}
	for(int i=0;i<n;i++){
		printf("%d %d %d\n",i+1,d[i],f[i]);
	}
}

int main(){
	int u,k,v;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			M[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		scanf("%d %d",&u,&k);
		u--;
		for(int j=0;j<k;j++){
			scanf("%d",&v);
			v--;
			M[u][v]=1;
		}
	}
	dfs();
}