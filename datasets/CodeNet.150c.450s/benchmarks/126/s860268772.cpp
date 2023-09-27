#include<cstdio>
#include<algorithm>
#include<functional>
using namespace std;
void func(int,int);
int a,b,n,k[17][17],cnt;
int main(void)
{
	int i,j,x,y;
	while(1){
		scanf("%d %d",&a,&b);
		if(a==0&&b==0) break;
		scanf("%d",&n);
		for(i=1;i<=b;i++){
			for(j=1;j<=a;j++) k[i][j]=0;
		}
		for(i=0;i<n;i++){
			scanf("%d %d",&x,&y);
			k[y][x]=1;
		}
		cnt=0;
		func(1,1);
		printf("%d\n",cnt);
	}
	return 0;
}
void func(int yy,int xx){
	if(yy==b&&xx==a) cnt++;
	else{
		if(xx+1<=a&&k[yy][xx+1]==0) func(yy,xx+1);
		if(yy+1<=b&&k[yy+1][xx]==0) func(yy+1,xx);
	}
}