#include<cstdio>
#include<cstring>
#include<algorithm>
int h;
int ans;
int a[11][6];
bool fall_and_count()
{
	bool did=0;
	for(int i=1;i<=h;i++)
	{
		
		int val=-1,sum=0;
		int j;
		for(j=1;j<=5;j++)
		{
			if(a[i][j]!=a[i][j-1])
			{
				if(sum>=3 && val!=-1)
				{
					for(int k=j-1;k>=j-sum;k--) a[i][k]=-1;
					ans+=val*sum;
					did=1;
				}
				val=a[i][j];
				sum=1;
			} else sum++;
		}
		if(sum>=3 && val!=-1)
		{
			for(int k=5;k>=j-sum;k--) a[i][k]=-1;
			ans+=val*sum;
			did=1;
		}
	}
	return did;
}
void summarize()
{
	for(int i=1;i<=5;i++)
	{
		int pos=0;
		for(int j=1;j<=h;j++)
		{
			if(a[j][i]!=-1)
			{
				a[++pos][i]=a[j][i];
			}
		}
		for(int j=pos+1;j<=h;j++) a[j][i]=-1;
	}
}
int main()
{
	while(~scanf("%d",&h) && h)
	{
		ans=0;
		for(int i=h;i>=1;i--)
		{
			for(int j=1;j<=5;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		while(fall_and_count())
		{	
			summarize();
			// for(int i=h;i>=1;i--)
			// {
			// 	for(int j=1;j<=5;j++)
			// 	{
			// 		printf("%d\t",a[i][j]);
			// 	}
			// 	printf("\n");
			// }
			// printf("\n\n");
		}
		printf("%d\n",ans);
	}
}
