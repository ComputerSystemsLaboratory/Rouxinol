#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int N,M;
int Maxsum;
int sum[100005];
int data[15][100005];

void dfs(int x){
	if(x==N){
		int num=0;
		memset(sum,0,sizeof(sum));
		for(int i=0;i<M;i++){
			for(int j=0;j<N;j++){
				sum[i]+=data[j][i];
			}
			if(sum[i]<=N/2) sum[i]=N-sum[i];
			num+=sum[i];
		}
		Maxsum=max(Maxsum,num);
		return;
	}
	dfs(x+1);
	for(int i=0;i<M;i++){
		if(data[x][i]==1) data[x][i]=0;
		else data[x][i]=1;
	}
	dfs(x+1);
} 

void solve(){
	Maxsum=0;
	dfs(0);
	printf("%d\n",Maxsum);
}

int main(){
	while(true){
		scanf("%d%d",&N,&M);
		if(N==0&&M==0) break;
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				scanf("%d",&data[i][j]);
			}
		}
		solve();
	}
	return 0;
} 
