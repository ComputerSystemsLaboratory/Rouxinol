//最少全域木
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int G[103][103];
int V;
int NG[103][103];//新しくできるほう
int used[103];
int main(){
	int ans=0;
	cin>>V;
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
		cin>>G[i][j];
		}
	}
	for(int i=0;i<103;i++)for(int j=0;j<103;j++)NG[i][j]=-1;
	used[0]=1;
	for(int i=0;i<V;i++){
		int u=-1,a,b;
		for(int j=0;j<V;j++){
		if(used[j]==0)u=i;
		}
		if(u==-1)break;
		int now=99999999;
		for(int j=0;j<V;j++){
			for(int k=0;k<V;k++){
			if(now>G[j][k]&&G[j][k]!=-1&&used[j]==1&&used[k]==0){
			now=G[j][k];
			a=j,b=k;
			}
			}
		}
		ans+=G[a][b];
		used[b]=1;
		NG[a][b]=G[a][b];
	}
	cout<<ans<<endl;
	return 0;
}