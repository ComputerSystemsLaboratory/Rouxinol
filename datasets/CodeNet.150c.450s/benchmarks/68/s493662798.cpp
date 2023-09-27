#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main(void)
{
	int n,a[1000],i,mn;
	while(1)	{
		scanf("%d",&n);
		if(n==0)	break;
		for(i=0;i<n;i++)	scanf("%d",&a[i]);
		sort(a,a+n);
		mn=a[1]-a[0];
		for(i=2;i<n;i++)	{
			mn=min(mn,a[i]-a[i-1]);
		}
		printf("%d\n",mn);
	}
	return 0;
}
