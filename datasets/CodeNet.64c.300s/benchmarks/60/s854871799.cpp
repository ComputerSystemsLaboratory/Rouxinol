#include<stdio.h>
int r[16][16];
int a,b;
int n;
int i,j;
int x,y;

int solve(int p,int q){
	if(p==0&&q==0)return 1;
	else if(r[p][q]==1)return 0;
	else if(p==0)return solve(p,q-1);
	else if(q==0)return solve(p-1,q);
	else return solve(p-1,q)+solve(p,q-1);
}

int main(){
	while(1){
		scanf("%d %d",&a,&b);
		if(a==0&&b==0)return 0;
		for(i=0;i<a;i++)for(j=0;j<b;j++)r[i][j]=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d %d",&x,&y);
			r[x-1][y-1]=1;
		}
		printf("%d\n",solve(a-1,b-1));
	}
}