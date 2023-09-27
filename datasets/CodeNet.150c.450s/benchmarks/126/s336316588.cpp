#include<stdio.h>
int x,y,t[20][20],a,b,cnt;
void func(int x,int y)
{
	if(x==a&&y==b) cnt++;
	else{
		if(x+1<=a&&t[y][x+1]!=1) func(x+1,y);
		if(y+1<=b&&t[y+1][x]!=1) func(x,y+1);
	}
}
int main(void)
{
	int n,i,j;
	while(1){
		scanf("%d%d",&a,&b);
		if(a==0&&b==0) break;
		scanf("%d",&n);
		for(i=1;i<=b;i++){
			for(j=1;j<=a;j++){
				t[i][j]=0;
			}
		}
		for(i=1;i<=n;i++){
			scanf("%d%d",&x,&y);
			t[y][x]=1;
		}
		cnt=0;
		func(1,1);
		printf("%d\n",cnt);
	}
	return 0;
}