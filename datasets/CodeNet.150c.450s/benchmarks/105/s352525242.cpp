#include<bits/stdc++.h>
using namespace std;
int n;long long a[201],v[70];
inline bool ins(long long x)
{
	for(int i=62;i>=0;i--) if((x>>i)&1)
	{
		if(v[i]) x^=v[i];
		else {v[i]=x;return 1;}
	}
	return 0;
}
char s[201];
inline void solve()
{
	cin>>n;
	memset(v,0,sizeof(v));
	for(int i=1;i<=n;i++) cin>>a[i];
	scanf("%s",s+1);
	for(int i=n;i;i--)
	{
		if(s[i]=='0') ins(a[i]);
		else if(ins(a[i])) {puts("1");return;}
	}
	puts("0");
}
int main()
{
	int T;cin>>T;
	while(T--) solve();
	return 0;
}