#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;

bool A[110][110],flag[110];
int d[110];
int n;

void bfs(){
	queue<int> Q;
	Q.push(1);
	d[1]=0;
	while(Q.empty()==0){
		int u=Q.front();
		Q.pop();
		for(int i=2;i<=n;i++){
			if(A[u][i]==true && flag[i]==false ){
				flag[i]=true;
				Q.push(i);
				d[i]=d[u]+1;
			}
		}
	}
	for(int i=2;i<=n;i++) if(flag[i]==false) d[i]=-1;
	return ;
}

int main(){
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
	bfs();
	for(int i=1;i<=n;i++) cout<<i<<" "<<d[i]<<endl;	
	return 0;
}

