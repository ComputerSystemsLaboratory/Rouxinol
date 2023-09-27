#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,int> pii;
#define x first
#define y second
#define mp make_pair
#define pb push_back
template <typename TYPE> inline void chkmax(TYPE &x,TYPE y){x<y?x=y:0;}
template <typename TYPE> inline void chkmin(TYPE &x,TYPE y){y<x?x=y:0;}
template <typename TYPE> void readint(TYPE &x)
{
    x=0;int f=1;char c;
    for(c=getchar();!isdigit(c);c=getchar())if(c=='-')f=-1;
    for(;isdigit(c);c=getchar())x=x*10+c-'0';
    x*=f;
}
const int MAXN=205;

int n;
ll a[MAXN];
char b[MAXN];
ll c[MAXN];
void insert(ll x)
{
	for(int i=60;i>=0;--i)
		if((1ll<<i)&x)
		{
			if(!c[i]){c[i]=x;break;}
			x^=c[i];
		}
}
bool query(ll x)
{
	for(int i=60;i>=0;--i)
		if((1ll<<i)&x)
		{
			if(!c[i])return 0;
			x^=c[i];
		}
	return 1;
}
void solve()
{
	memset(c,0,sizeof(c));
	readint(n);
	for(int i=1;i<=n;++i)readint(a[i]);
	scanf("%s",b+1);
	for(int i=n;i;--i)
		if(b[i]-'0'==0)insert(a[i]);
		else if(!query(a[i])){printf("1\n");return;}
	printf("0\n");
}

int main()
{
	int T;
	readint(T);
	while(T--)solve();
	return 0;
}