#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int n,m;  int map[13][100003];  int book[13]; int ans; int newmap[13][100003]; int max0,max1; int preans;
void answer();
void dfs(int x)
{
	if(x==n+1) answer();
	else 
	{
		for(int i=0;i<2;i++)
		{
			book[x]=i;
			dfs(x+1);
		}
	}
}

void answer()
{
	 preans=0;
    
	for(int i=1;i<=n;i++)
	{
		if(book[i])
		for(int j=1;j<=m;j++)
		{
			newmap[i][j]=(map[i][j]+1)%2;
		}
		else 
		for(int j=1;j<=m;j++)
		{
			newmap[i][j]=map[i][j];
		}
	}

	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(newmap[j][i]==0)  max0++;
			else max1++;
		}
		 preans+=max(max0,max1);
		 max1=0; max0=0;
	}
	ans=max(ans,preans);
}


int main()
{
   	while(~scanf("%d%d",&n,&m)&&n!=0)
   	{
   		   ans=0; preans=0;
			 for(int i=1;i<=n;i++)
   		  {
   		     for(int j=1;j<=m;j++)
			 scanf("%d",&map[i][j]);	
		  }
       for(int i=0;i<2;i++)
       {
       	  book[1]=i;
       	  dfs(2);
	   }
	   cout<<ans<<endl;
	}
	return 0;
}
