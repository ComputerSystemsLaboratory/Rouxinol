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
			sort(num[i],num[i]+n[i]);
		}
		int ans[2]={101,101};
		for(int i=0,now[2];i<n[0];i++){
			for(int j=0;j<n[1];j++){
				int now[2]={sum[0]-num[0][i]+num[1][j],sum[1]-num[1][j]+num[0][i]};
				if(now[0]==now[1]){
					if(num[0][i]+num[1][j]<ans[0]+ans[1]){
						swap(num[0][i],ans[0]);
						swap(num[1][j],ans[1]);
					}
					break;
				}
			}
		}
		if(ans[0]==101)cout<<-1<<endl;
		else cout<<ans[0]<<" "<<ans[1]<<endl;
	}
}