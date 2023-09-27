#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
int n,m;
int fa[maxn],ran[maxn];
struct Edge{
	int l,r,w;
}pp[maxn];
bool cmp(const Edge &a,const Edge &b)
{
	return a.w<b.w;
}
void init(int size)
{
	for(int i=0;i<=size;i++)
		fa[i]=i,ran[i]=0;
}
int Find(int x)
{
	return fa[x]==x?x:Find(fa[x]);
}
void Union(int x,int y)
{
	int fx=Find(x),fy=Find(y);
	if(ran[x]>=ran[y]){
		ran[fx]+=ran[fy];
		fa[fy]=fx;
	}
	else {
		ran[fy]+=ran[fx];
		fa[fx]=fy;
	}
}
int main()
{
	int cnt=0,ans=0;
	cin>>n>>m;
	init(n);
	for(int i=1;i<=m;i++)
	{
		cin>>pp[i].l>>pp[i].r>>pp[i].w;
	}
	sort(pp+1,pp+1+m,cmp);
	for(int i=1;i<=m;i++)
	{
		if(Find(pp[i].l)!=Find(pp[i].r)){
			Union(pp[i].l,pp[i].r);
			ans+=pp[i].w;
		}
		if(cnt==n-1)break;
	}
	cout<<ans<<endl;
	return 0;
}

