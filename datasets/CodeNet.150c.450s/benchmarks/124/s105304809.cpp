#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
int main(void)
{
	int n,i,j,u,k,v,c,min,ki;
	int ri[101][101],flg[101];
	int ans[101];
	scanf("%d",&n);
	for(i=0;i<=100;i++) for(j=0;j<=100;j++) ri[i][j]=M;
	for(i=0;i<n;i++){
		scanf("%d %d",&u,&k);
		for(j=0;j<k;j++){
			scanf("%d %d",&v,&c);
			if(ri[i][v]>c){
				ri[i][v]=c;
			}
		}
	}
	for(i=0;i<n;i++) flg[i]=0,ans[i]=M;
	//for(i=0;i<n;i++) for(j=0;j<n;j++) if(ri[i][j]!=M) printf("%d-%d %d\n",i,j,ri[i][j]);
	ans[0]=0;
	for(i=0;i<n;i++){
		min=M;
		for(j=0;j<n;j++){
			if(flg[j]==0&&ans[j]<min){
				min=ans[j];
				ki=j;
			}
		}
		flg[ki]=1;
		for(j=0;j<n;j++){
			if(min+ri[ki][j]<ans[j]){
				ans[j]=min+ri[ki][j];
			}
		}
	}
	//for(i=0;i<n;i++) printf("%d\n",ans[i]);
	for(i=0;i<n;i++) printf("%d %d\n",i,ans[i]);
	return 0;
}
