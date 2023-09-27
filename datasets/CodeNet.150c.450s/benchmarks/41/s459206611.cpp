//c// 
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;
 
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int tag[105][105]={0};
	int way[105][105]={0};
	int i,j,k;
	for(i=0;i<m;i++)
	{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		if(tag[a][b]==1)
		{
			way[a][b]=min(c,way[a][b]);
		}
		else
		{
			way[a][b]=c;
			tag[a][b]=1;	
		}
	} 
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j) tag[i][j]=1;
				if(tag[i][k]==1&&tag[k][j]==1&&tag[i][j]==1)
				{
					way[i][j]=min(way[i][k]+way[k][j],way[i][j]);
				}	
				else if(tag[i][k]==1&&tag[k][j]==1&&tag[i][j]==0)	
				{
					way[i][j]=way[i][k]+way[k][j];
					tag[i][j]=1;
				}		
			} 	
		} 
	}
	for(k=0;k<n;k++)
	{
		if(way[k][k]<0)
		{
			printf("NEGATIVE CYCLE\n");
			goto end;
		} 
	} 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j>0) printf(" ");
			if(i==j)
			{
				printf("0");
			}
			else if(tag[i][j]==1)
			{
				printf("%d",way[i][j]);
			}
			else
			{
				printf("INF");
			}
		}
		 printf("\n");
	}
	end:return 0;
}
