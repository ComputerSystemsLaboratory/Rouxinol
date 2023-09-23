#include<stdio.h>
#include<string.h>
int a[13],vis[13],flag;
void dfs(int x,int l,int r)
{
   	int i;
   	if(x==11)return;
   	if(flag)return ;
   	if(a[x]>l)dfs(x+1,a[x],r);
   	else  if(a[x]>r)dfs(x+1,l,a[x]);
   	else  {flag=1;return;}
	   
}
int main()
{
	int T,i,j,k;
	scanf("%d",&T);
	while(T--)
	{
		flag=0;
		for(i=1;i<=10;i++)
		scanf("%d",&a[i]);
	memset(vis,0,sizeof(vis));
		dfs(1,0,0);
		if(flag)printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}