#include<stdio.h>
int ar[100000];
int max(int a,int b){return a>b?a:b;}
int main(){
	int n,k;
	int i,j;
	while(1){
	int ans=0;
	scanf("%d %d",&n,&k);
	if(n==0)return 0;
	for(i=0;i<n;i++)scanf("%d",&ar[i]);
	int res=0;
	for(i=0;i<k;i++)res+=ar[i];
	ans=max(ans,res);
	for(i=k;i<n;i++){
		res+=ar[i];
		res-=ar[i-k];
		ans=max(ans,res);
	}
	printf("%d\n",ans);
	}
}