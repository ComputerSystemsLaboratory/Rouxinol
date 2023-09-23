#include<stdio.h>
#include<algorithm>
#include<functional>
using namespace std;
void miti(int,int);
int a,b,n,c,kouzi[17][17];
int main(void)
{
	int x,y,i,k;
	while(1){
		scanf("%d %d",&a,&b);
		if(a==0 && b==0) break;
		scanf("%d",&n);
		for(i=1;i<=b;i++){
			for(k=1;k<=a;k++)	kouzi[i][k]=0;
		}
		for(i=0;i<n;i++){
			scanf("%d %d",&x,&y);
			kouzi[y][x]=1;
		}
		c=0;
		miti(1,1);
		printf("%d\n",c);
	}
	return 0;
}
void miti(int p,int o)
{
	if(p==b && o==a)	c++;
	
	else {
		if(o+1<=a && kouzi[p][o+1]==0) miti(p,o+1);
		if(p+1<=b && kouzi[p+1][o]==0) miti(p+1,o);
	}
}