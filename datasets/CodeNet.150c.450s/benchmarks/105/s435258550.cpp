#include<bits/stdc++.h>
using namespace std;
struct linear_base
{
	long long a[66],mxlog;
	void Insert(long long x)
	{
		for (long long i=mxlog;i>=0;i--)
		{
			if (x&(1ll<<i))
			{
				if (!a[i]) 
				{
					a[i]=x;
					return;
				}
				else x^=a[i];
			}
		}
	}
	bool check(long long x)
	{
		for (long long i=mxlog;i>=0;i--)
		{
			if (x&(1ll<<i))
			{
				if (!a[i]) return 0;
				else x^=a[i];
			}
		}
		return 1;
	}
	void merge(const linear_base &b) 
	{
		for (long long i=mxlog;i>=0;i--) 
		{
			if (b.a[i]) Insert(b.a[i]);
		}
	}
	long long findmax(int Xor)
	{
		long long res=Xor;
		for (long long i=mxlog;i>=0;i--) 
		{
			if ((res^a[i])>res) res^=a[i];
		}
		return res;
	}
	long long findmin()
	{
		for (long long i=0;i<=mxlog;i++)
		{
			if (a[i]) return a[i];
		}
	}
	long long findkth(long long k)
	{
		long long tmp[66],cnt=0,res=0;
		for (long long i=0;i<=mxlog;i++)
		{
			for (long long j=i-1;j>=0;j--)
			{
				if (a[i]&(1ll<<j)) a[i]^=a[j];
			}
			if (a[i]) tmp[cnt++]=a[i];
		}
		for (long long i=0;i<cnt;i++)
		{
			if (k&(1ll<<i)) res^=tmp[i];
		}
		return res;
	}
}l;
int test,n;
long long a[222];
char s[222];
bool flg;
int main()
{
	l.mxlog=60;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&n);
		for (int i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for (int i=0;i<=l.mxlog;i++) l.a[i]=0;
		scanf("%s",s);flg=0;
		for (int i=n-1;i>=0;i--)
		{
			if (s[i]=='1')
			{
				if (!l.check(a[i+1])) 
				{
					flg=1;
					break;
				}
			}
			else
			{
				l.Insert(a[i+1]); 
			}
		}
		if (flg) printf("1\n");
		else printf("0\n");
	}
	return 0;
}