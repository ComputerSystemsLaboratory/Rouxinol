# include <iostream>
# include <cstdio>
using namespace std;
int *a;
int find_top(int i)
{
	while(a[i] != i) i = a[i];
	return i;
}
void union_find(int x,int y)
{
	a[x] = find_top(x);
	a[y] = find_top(y);
	a[a[x]] = a[y];
}
int main(void)
{
	int n,m,u,v;
	scanf("%d %d",&n,&m);
	a = new int [n];
	for(int i = 0;i < n;i++) a[i] = i;
	while(m--)
	{
		scanf("%d %d",&u,&v);
		union_find(u,v);
	}
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d %d",&u,&v);
		a[u] = find_top(u); a[v] = find_top(v);
		printf("%s\n",a[u] == a[v]?"yes":"no");
	}
	return 0;
}
