#include<stdio.h>
int main()
{
	int n,b[4][3][10]={0};
	while(scanf("%d",&n)!=EOF&&n)
	{
		int i,j,a[4]={0};
		for(i=0;i<n;i++)
		{
			scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
			if(a[0]>5||a[0]<0||a[1]>4||a[1]<0||a[2]>11||a[2]<0)
			{
				b[a[0]-1][a[1]-1][a[2]-1]=0;
			}
			if(b[a[0]-1][a[1]-1][a[2]-1]>0)
			{
				b[a[0]-1][a[1]-1][a[2]-1]+=a[3];
			}
			else if(a[3]<0)
			{
				if(a[3]>b[a[0]-1][a[1]-1][a[2]-1])
				{
					//b[a[0]][a[1]][a[2]]=0;
				}
				else
				{
					b[a[0]-1][a[1]-1][a[2]-1]+=a[3];
				}
			} 
			else
			{
				b[a[0]-1][a[1]-1][a[2]-1]=a[3];
			}
			
			
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<10;j++)
			{
				printf(" %d",b[0][i][j]);
			}
			printf("\n");
		}
		printf("####################\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<10;j++)
			{
				printf(" %d",b[1][i][j]);
			}
			printf("\n");
		}
		
		printf("####################\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<10;j++)
			{
				printf(" %d",b[2][i][j]);
			}
			printf("\n");
		}
		printf("####################\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<10;j++)
			{
				printf(" %d",b[3][i][j]);
			}
			printf("\n");
		}
	}
	return 0;
} 