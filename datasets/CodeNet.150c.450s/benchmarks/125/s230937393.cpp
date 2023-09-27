#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstring>
using namespace std;

bool A[110][110],flag[110];
int in[110],out[110];
int n,now=1;
stack<int> S;

void dfs_visit(int u){
	flag[u]=true;
	for(int i=1;i<=n;i++){
		if(A[u][i]==true && flag[i]==false) {
			S.push(i);
			in[i]=now++;
			dfs_visit(i);
		}
	}
	int x=S.top();
	S.pop();
	out[x]=now++;
	return ;
}

void dfs(){
	S.push(1);in[1]=now++;
L1:	while(S.empty()==0){
		int x=S.top();
		dfs_visit(x);
	}
	for(int i=1;i<=n;i++){
		if(flag[i]==false){
			S.push(i);in[i]=now++;goto L1;
		}
	}
	for(int i=1;i<=n;i++) cout<<i<<" "<<in[i]<<" "<<out[i]<<endl;
	return ;
}

int main (){
	int a,b,c;
	cin>>n;
	for(int i=1;i<=n;i++){
		flag[i]=false;
			for(int j=1;j<=n;j++){
				A[i][j]=false;
		}
	}
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=1;j<=b;j++){
			cin>>c;
			A[a][c]=true;
		}
	}
	dfs();
	return 0;

}
