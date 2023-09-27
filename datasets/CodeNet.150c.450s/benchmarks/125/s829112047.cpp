#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

bool A[110][110];
int flag[110],in[110],out[110];
int now=1,n;

void dfs(int u){
	flag[u]=1;
	in[u]=now++;
	for(int i=1;i<=n;i++){
		if(flag[i]==0 && A[u][i]==true){
			dfs(i);
		}
	}
	out[u]=now++;
	return ;
}

int main(){
	int a,b,c;
	cin>>n;
	for(int i=1;i<=n;i++){
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
	for(int i=1;i<=n;i++){
		if(flag[i]==0) dfs(i);
	}
	for(int i=1;i<=n;i++){
		cout<<i<<" "<<in[i]<<" "<<out[i]<<endl;
	}
	return 0;
}
