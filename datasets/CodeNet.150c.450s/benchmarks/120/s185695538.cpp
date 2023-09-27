#include<stdio.h>
bool f[10][10000];
int max(int a,int b){return a>b?a:b;}
int main(){
	int r,c;
	while(1){
	scanf("%d %d",&r,&c);
	if(r==0)return 0;
	int i,j,k;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			int x;
			scanf("%d",&x);
			f[i][j]=x==0;
		}
	}
	int ans=0;
	for(i=0;i<1<<r;i++){
		bool rv[10];
		for(j=0;j<r;j++)rv[j]=i>>j&1;
		int res=0;
		for(j=0;j<c;j++){
			int p=0;
			for(k=0;k<r;k++)if(f[k][j]^rv[k])p++;
			if(p>=r-p)res+=p;
			else res+=r-p;
		}
		ans=max(ans,res);
	}
	printf("%d\n",ans);
	}
}