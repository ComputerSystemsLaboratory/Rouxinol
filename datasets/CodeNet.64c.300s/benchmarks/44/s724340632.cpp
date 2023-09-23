#include<stdio.h>
#define inf 0x3f3f3f3f
int map[11][11];
int main(void)
{
	int n;
	while(scanf("%d",&n),n!=0)
	{
		for(int i=0;i<=11;i++)
		{
			for(int j=0;j<=11;j++)
			map[i][j]=inf;
			map[i][i]=0;
		}
		int max=0;
		for(int i=0;i<n;i++)
		{
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			if(map[a][b]>c)
			{
				map[a][b]=map[b][a]=c;
			}
			if(a>max)
			max=a;
			if(b>max)
			max=b;
		}
		for(int k=0;k<=max;k++)
		for(int i=0;i<=max;i++)
		for(int j=0;j<=max;j++)
		if(map[i][j]>map[i][k]+map[k][j])
		{
			map[i][j]=map[i][k]+map[k][j];
		}
		int min=inf,k;
		for(int i=0;i<=max;i++)
		{
			int num=0;
			for(int j=0;j<=max;j++)
			num=num+map[i][j];
			if(num<min)
			{
				min=num;
				k=i;
			}
		}
		printf("%d %d\n",k,min);
	}
	return 0;
}