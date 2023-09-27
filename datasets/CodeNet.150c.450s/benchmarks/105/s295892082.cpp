#include <bits/stdc++.h>
#define MAXN 207
#define MAXL 67
using namespace std;
long long b[MAXL],a[MAXN];
bool vi[MAXL];
void dodaj(long long x)
{
	for(long long i=59;i>=0;i--) if(x&(1LL<<i))
	{
		if(vi[i]) x^=b[i];
		else {vi[i]=true; b[i]=x; return;}
	}
}
bool proveri(long long x)
{
	for(long long i=59;i>=0;i--) if(x&(1LL<<i) && vi[i]) x^=b[i];
	return x!=0;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		string s;
		fill(vi,vi+MAXL,false);
		for(int i=0;i<n;i++) cin>>a[i];
		cin>>s;
		bool p1=false;
		for(int i=n-1;i>=0;i--)
		{
			if(s[i]=='0') dodaj(a[i]);
			else p1=p1||proveri(a[i]);
		}
		if(p1) printf("1\n");
		else printf("0\n");
	}
}