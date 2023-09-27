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
	int n,m;
	scanf("%d%d",&n,&m);
	init(n);
	for(int i=0;i<m;i++)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		uni(u,v);
	}
	int q;
	scanf("%d",&q);
	for(int i=0;i<q;i++)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		if(same(u,v)) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}