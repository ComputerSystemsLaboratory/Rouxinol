#include<bits/stdc++.h>
using namespace std;
vector<int> to[100005];

void bfs(int n){
	queue<int> q;
  	vector<int> dist(n,-1);
  	vector<int> pre(n,-1);
  
  	q.push(0);
  	dist[0]=0;
  
  	while(!q.empty()){
    	int v=q.front();q.pop();
      	for(int u: to[v]){
        	if(dist[u]!=-1) continue;
          	dist[u]=dist[v]+1;
          	pre[u]=v;
          	q.push(u);
        }
    }
  	cout << "Yes" << endl;
  	for(int i=1;i<n;++i){
      		cout << pre[i]+1 << endl;
    }
}

int main(){
	int n,m;
  	cin >> n >> m;
  	for(int i=0;i<m;++i){
    	int a,b;
      	cin >> a >> b;
      	--a;
      	--b;
      	to[a].push_back(b);
      	to[b].push_back(a);
    }
  
  	bfs(n);
  	return 0;
}