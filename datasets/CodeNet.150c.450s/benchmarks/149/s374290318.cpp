#include<bits/stdc++.h>
#define same(a,b) (find(a)==find(b))
#define uni(a,b) fa[find(a)]=find(b)
#define init(n) for(int i=0;i<n;i++) fa[i]=i

int fa[100100];

int find(int x)
{
	if(x==fa[x]) return x;
	return fa[x]=find(fa[x]);
}

int main()
{
	int n,q;
	scanf("%d%d",&n,&q);
	init(n);
	for(int i=0;i<q;i++)
	{
		int t,u,v;
		scanf("%d%d%d",&t,&u,&v);
		if(t==0) uni(u,v);
		else if(same(u,v)) printf("1\n");
		else printf("0\n");
	}
	return 0;
}