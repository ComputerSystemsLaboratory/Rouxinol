#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define Fast_IO ios::sync_with_stdio(false);
#define DEBUG fprintf(stderr,"Running on Line %d in Function %s\n",__LINE__,__FUNCTION__)
//mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
#define fir first
#define sec second
#define mod 998244353
#define int long long
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
inline int read()
{
	char ch=getchar(); int nega=1; while(!isdigit(ch)) {if(ch=='-') nega=-1; ch=getchar();}
	int ans=0; while(isdigit(ch)) {ans=ans*10+ch-48;ch=getchar();}
	if(nega==-1) return -ans;
	return ans;
}
typedef pair<int,int> pii;
struct Basis
{
	int t[64];
	void clear(){memset(t,0,sizeof(t));}
	bool insert(int u)
	{
		for(int i=60;i>=0;i--)
		{
			if(u&(1LL<<i))
			{
				if(!t[i]) {t[i]=u; return 1;}
				u^=t[i];
			}
		}
		return 0;
	}
}b;
#define N 205
int a[N];
char s[N];
void work()
{
	int n=read();
	for(int i=1;i<=n;i++) a[i]=read();
	scanf("%s",s+1);
	b.clear();
	for(int i=n;i>=1;i--)
	{
		if(b.insert(a[i])&&s[i]=='1')
		{
			cout<<1<<endl;
			return ;
		}
	}
	cout<<"0\n";
}
signed main()
{
	int T=read(); while(T--) work();
	return 0;
}

