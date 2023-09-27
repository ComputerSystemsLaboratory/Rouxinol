#include<cstdio>
#define RI register int
using namespace std;
typedef long long LL;
const int N=205;
struct Linear_Basis
{
	LL p[63];
	inline void clear(void)
	{
		for (RI i=0;i<63;++i) p[i]=0;
	}
	inline void insert(LL x)
	{
		for (RI i=62;~i;--i) if ((x>>i)&1)
		{
			if (!p[i]) return (void)(p[i]=x); x^=p[i];
		}
	}
	inline bool exist(LL x)
	{
		for (RI i=62;~i;--i) if ((x^p[i])<x) x^=p[i]; return !x;
	}
}l;
int t,n; LL a[N]; char s[N];
int main()
{
	for (scanf("%d",&t);t;--t)
	{
		RI i; for (scanf("%d",&n),i=1;i<=n;++i) scanf("%lld",&a[i]);
		scanf("%s",s+1); if (s[n]=='1') { puts("1"); continue; }
		bool flag=0; for (l.clear(),i=n;i;--i) if (s[i]=='1')
		{
			if (!l.exist(a[i])) { flag=1; break; }
		} else l.insert(a[i]);
		puts(flag?"1":"0");
	}
	return 0;
}