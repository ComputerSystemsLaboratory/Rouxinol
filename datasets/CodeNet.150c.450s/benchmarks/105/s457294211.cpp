#include <bits/stdc++.h>
using namespace std;
#define N 205
#define ll long long
#define set(a,v) memset(a,v,sizeof(a))
int T,n;ll a[N],v[65];char b[N];
void ins(ll _v)
{
	for(int i=60;i>=0;--i)
		if((_v>>i)&1) {if(!v[i]) v[i]=_v;_v^=v[i];}
}
bool find(ll _v)
{
	for(int i=60;i>=0;--i)
		if((_v>>i)&1) {if(!v[i]) return 0;_v^=v[i];}return 1;
}
void slv()
{
	set(v,0);scanf("%d",&n);
	for(int i=1;i<=n;++i) scanf("%lld",&a[i]);scanf("%s",b+1);
	for(int i=n;i>=1;--i)
		if(b[i]=='0') ins(a[i]);
		else if(!find(a[i])) {puts("1");return;}
	puts("0");
}
int main() {scanf("%d",&T);while(T--) slv();return 0;}