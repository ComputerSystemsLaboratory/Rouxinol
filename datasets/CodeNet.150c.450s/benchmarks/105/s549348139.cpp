#pragma GCC optimize(2)
#include<bits/stdc++.h>
#define ll long long
#define maxn 1000005
#define inf 1e9
#define pb push_back
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define per(i,a,b) for(int i=a;i>=b;i--)
using namespace std;

inline ll read()
{
	ll x=0,w=1; char c=getchar();
	while(c<'0'||c>'9') {if(c=='-') w=-1; c=getchar();}
	while(c<='9'&&c>='0') {x=(x<<1)+(x<<3)+c-'0'; c=getchar();}
	return w==1?x:-x;
}

char s[maxn];
ll a[maxn],v[65];

inline void ins(ll x)
{
	for(ll i=63;i>=0;i--)
	{
		if(x&(1ll<<i))
		{
			if(!v[i]) {v[i]=x; break;}
			else x^=v[i];
		}
	}
}

inline bool q(ll x)
{
	for(ll i=63;i>=0;i--) if(x&(1ll<<i)) x^=v[i];
	if(x) return false; return true;
}

int main()
{
	int T=read();
	while(T--)
	{
		ll n=read(),F=0; rep(i,1,n) a[i]=read(); scanf("%s",s+1);
		rep(i,0,63) v[i]=0;
		per(i,n,1)
		{
			if(s[i]=='0') ins(a[i]);
			else if(!q(a[i])) {F=1; break;}
		}
		if(F) puts("1"); else puts("0");
	}
	return 0;
}