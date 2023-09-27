#include<stdio.h>
#include<map>
typedef std::map<int,int>M;
typedef M::iterator I;
void F(int*a,int s,M&m)
{
	int i,j,x;
	for(i=1;i<=s;++i)
	{
		for(x=j=0;j<i;++j)x+=a[j];
		++m[x];
		for(j;j<s;++j)
		{
			x-=a[j-i];
			x+=a[j];
			++m[x];
		}
	}
}
int main()
{
	int n,m,h[1500],w[1500],i,r;
	I p,q;
	while(scanf("%d%d",&n,&m),m)
	{
		M H,W;
		for(r=i=0;i<n;++i)scanf("%d",h+i);
		for(i=0;i<m;++i)scanf("%d",w+i);
		F(h,n,H);
		F(w,m,W);
		for(p=H.begin();p!=H.end();++p)
			if((q=W.find(p->first))!=W.end())
				r+=p->second*q->second;
		printf("%d\n",r);
	}
	return 0;
}