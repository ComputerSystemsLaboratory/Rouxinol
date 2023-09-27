#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#define maxn 100005
using namespace std;
typedef long long ll;
int n;
int cnt[maxn];
int main()
{
	ll ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int x;
		scanf("%d",&x);
		cnt[x]++;
		ans+=x;
	}
	int _;
	scanf("%d",&_);
	while(_--)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		ans-=1ll*x*cnt[x];
		ans+=1ll*y*cnt[x];
		cnt[y]+=cnt[x];
		cnt[x]=0;
		printf("%lld\n",ans);
	}
}