
#include<stdio.h>
#include<algorithm>
struct A{
	int h,w;
	int d;
}a[999999];
int n;
bool compare(const A &p, const A &q)
{
	if(p.d < q.d)return true;
	else if(p.d == q.d && p.h < q.h)
		return true;
	return false;
}
void inil()
{
	int i, j;
	for(i=1; i<=200; i++)
	{
		for(j=i+1;j<=200;j++)
		{
			a[n].h = i;
			a[n].w = j;
			a[n].d = i*i + j*j;
			n++;
		}
	}
	std::sort(a,a+n,compare);
}
void find_d(int n,int m)
{
	int d = n*n + m*m;
	A k;
	k.h = n;
	k.w = m;
	k.d = d;
	int l,r;
	int mid;
	l=0;r=n;
	while(l<r)
	{
		mid = (l+r)/2;
		if(compare(a[mid],k))
			l = mid+1;
		else
			r = mid;
	}
	int i;
	i = l-20;
	if(i<0)i=0;
	for(;;i++)
	{
		if(a[i].d < k.d)continue;
		else if(a[i].d == k.d) 
		{
			if(a[i].h < k.h) continue;
			else break;
		}
	}
	i++;
	printf("%d %d\n",a[i].h,a[i].w);
}
int main()
{
	inil();
	while(1)
	{
		int n, m;
		scanf("%d %d",&n,&m);
		if(n+m==0)break;
		find_d(n,m);
	}
}