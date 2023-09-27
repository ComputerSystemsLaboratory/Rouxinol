#include <bits/stdc++.h>
using namespace std;
int main() {
	int n[2];
	while(cin>>n[0]>>n[1],n[0],n[1]){
		int num[2][101],sum[2]={};
		for(int i=0;i<2;i++){
			for(int j=0;j<n[i];j++){
				cin>>num[i][j];
				sum[i]+=num[i][j];
			}
		}
		int ans[2]={101,101};
		for(int i=0;i<n[0];i++){
			int now[2]={sum[0]-num[0][i],sum[1]+num[0][i]};
			for(int j=0;j<n[1];j++){
				if(now[0]+num[1][j]==now[1]-num[1][j]&&num[0][i]+num[1][j]<ans[0]+ans[1]){
					ans[0]=num[0][i];
					ans[1]=num[1][j];
				}
			}
		}
		if(ans[0]==101)cout<<-1<<endl;
		else cout<<ans[0]<<" "<<ans[1]<<endl;
	}
}