#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
const int maxx=100100;
vector<int> A[maxx];
int color[maxx];
int c=1;

void dfs(int u){
	if(color[u]!=-1) return ;
	color[u]=c;
	int si=A[u].size();
	for(int i=0;i<si;i++){
		if(color[A[u][i]]==-1){
			dfs(A[u][i]);
		}
	}
	return ;
}

int main(){
	int n,q,a,b;// why i should put the dim n in main but not global
	cin>>n>>q;
	for(int i=0;i<=maxx;i++) color[i]=-1;
	for(int i=1;i<=q;i++){
		cin>>a>>b;
		A[a].push_back(b);
		A[b].push_back(a);
	}
	for(int i=0;i<n;i++){
		dfs(i);
		c++;

	}
//	for(int i=0;i<n;i++){
//		cout<<i<<" "<<color[i]<<endl;
//	}
	
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>a>>b;
		if(color[a]==color[b]) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
