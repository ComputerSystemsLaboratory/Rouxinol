#include<cstdio>
#include<algorithm>
#include<functional>
#include<cstring>
using namespace std;
int main(void)
{
	long long sum;
	int i,n,q,s[100001],a,b,c;
	for(i=1;i<=100000;i++)	s[i]=0;
	scanf("%d",&n);
	sum=0;
	for(i=0;i<n;i++)	{
		scanf("%d",&a);
		s[a]++;
		sum+=a;
	}
	scanf("%d",&q);
	for(i=0;i<q;i++)	{
		scanf("%d %d",&b,&c);
		sum+=(long long)s[b]*(c-b);
		printf("%lld\n",sum);
		s[c]+=s[b];
		s[b]=0;
	}
	return 0;
}