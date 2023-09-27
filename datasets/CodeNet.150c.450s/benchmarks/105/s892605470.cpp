#include<bits/stdc++.h>
using namespace std;
const int maxn=2000;
int n,t;long long d;
long long a[maxn];
char str[maxn];
long long base[100];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		bool f=1;d=0;
		memset(base,0,sizeof(base));
		for(int i=0;i<n;i++) {
			scanf("%lld",&a[i]);while((1ll<<d)<=a[i]) ++d;}
		scanf("%s",str);
		for(int i=n-1;i>=0;i--)
		{
			if(str[i]=='0') {
				for(long long j=d;j>=0;j--)
					if(a[i]&(1ll<<j)) {
						if(base[j]>0) a[i]^=base[j];
						else {base[j]=a[i];break;}
					}
			}
			else 
			{
				for(long long j=d;j>=0;j--)
					if(a[i]&(1ll<<j)) {
						if(base[j]>0) a[i]^=base[j];
						else f=0;
					}
			}
			
		}
		if(f==0) printf("1\n");
		else  printf("0\n");
	}
	return 0;
}