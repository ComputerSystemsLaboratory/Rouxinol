#include<stdio.h>
void func(int,int);
int n,m,cnt,sum;
int main(void)
{
	while(1){
		int i,j;
		scanf("%d %d",&n,&m);
		if(n==0&&m==0) break;
		cnt=0; sum=0;
		func(0,0);
		printf("%d\n",cnt);
	}
	return 0;
}
void func(int nn,int x)
{
	int i;
	if(nn==n&&sum==m) cnt++;
	else{
		for(i=x;i<10;i++){
			sum+=i; func(nn+1,i+1);
			sum-=i;
		}
	}	
}