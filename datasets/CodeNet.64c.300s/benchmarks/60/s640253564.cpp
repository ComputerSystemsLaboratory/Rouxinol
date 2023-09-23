#include<stdio.h>
int main()
{
	int a,b,n,x,y;
	while(scanf("%d%d",&a,&b),a)
	{
		int k[17][17]={0},r[17][17]={0};
		scanf("%d",&n);
		while(n--)scanf("%d%d",&x,&y),k[x][y]=1;
		for(x=n=1;x<=a;++x)r[x][1]=(k[x][1]?n=0:n);
		for(y=n=1;y<=b;++y)r[1][y]=(k[1][y]?n=0:n);
		for(x=2;x<=a;++x)for(y=2;y<=b;++y)if(!k[x][y])r[x][y]=r[x-1][y]+r[x][y-1];
		printf("%d\n",r[a][b]);
	}
	return 0;
}