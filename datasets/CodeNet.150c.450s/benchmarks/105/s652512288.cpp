#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
const int N=500005,M=1000000007;
int n,i,j,t;
long long a[N],f[66];
char c[N];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;++i)
			scanf("%lld",&a[i]);
		scanf("%s",c+1);
		memset(f,0,sizeof(f));
		for(i=n;i>=1;--i)
			if(c[i]=='0')
			{
				long long x=a[i];
				for(j=62;j>=0;--j)
					if((x>>j)&1)
						if(!f[j])
						{
							f[j]=x;
							break;
						}
						else
							x^=f[j];
			}
			else
			{
				long long x=a[i];
				for(j=62;j>=0;--j)
					if((x>>j)&1)
						x^=f[j];
				if(x)
					break;
			}
		if(i<=0)
			puts("0");
		else
			puts("1");
	}
}
