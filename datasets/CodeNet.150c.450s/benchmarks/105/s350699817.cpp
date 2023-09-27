#include<bits/stdc++.h>
using namespace std;
#define llong long long
int T;
int n;
llong a[220];
llong B[110];
int op[220];
void ins(llong x)
{
	for(int i=61;i>=0;--i)
		if((x>>i)&1)
		{
			if(!B[i])
			{
				B[i]=x;
				break;
			}
			x^=B[i];
		}
}
bool find(llong x)
{
	for(int i=61;i>=0;--i)
		if((x>>i)&1)x^=B[i];
	return x==0;
}
int main()
{
	scanf("%d",&T);
while(T--)
{
	scanf("%d",&n);
	for(int i=1;i<=n;++i)scanf("%lld",&a[i]);
	for(int i=1;i<=n;++i)scanf("%1d",&op[i]);
	memset(B,0,sizeof(B));
	int ans=0;
	for(int i=n;i;--i)
		if(op[i]==0)ins(a[i]);
		else if(!find(a[i]))
		{
			ans=1;break;
		}
	printf("%d\n",ans);
}
	return 0;
}
