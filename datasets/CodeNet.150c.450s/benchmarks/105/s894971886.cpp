#include<cstdio>
#include<cctype>
#include<cstring>
#include<algorithm>
#include<cmath>
#define il inline
#define ll long long
#define rep(i,s,t) for(register int i=(s);i<=(t);i++)
#define rev_rep(i,s,t) for(register int i=(s);i>=(t);i--)
#define each(i,u) for(int i=head[u];i;i=bow[i].nxt)
#define file(s) freopen(s".in" ,"r",stdin),freopen(s".out","w",stdout)
#define pt(x) putchar(x)
using namespace std;
il ll ci(){
	register char ch;int f=1;
	while(!isdigit(ch=getchar()))f=ch=='-'?-1:1;
	register ll x=ch^'0';
	while(isdigit(ch=getchar()))x=(x*10)+(ch^'0');
	return f*x;
}

enum{N=223};

const int b0 = 62;
struct BASE{
	ll s[b0+1];
	il ll operator[](int x)const{ return s[x]; }
	il ll& operator[](int x){ return s[x]; }
	bool insert(ll x){
		rev_rep(i,b0,0) if( x&(1ll<<i) ){
			if( s[i]==0 ){
				s[i] = x;
				return 1;
			}else x^=s[i];
		}
		return 0;
	}
};

ll x[N];
char s[N];

BASE a,b;

int main(){
	int T = ci();
	while( T-- ){
		memset(&a,0,sizeof(a));
		memset(&b,0,sizeof(b));
		int n = ci();
		rep(i,1,n) x[i] = ci();
		scanf("%s",s+1);
		s[n+1] = '0';
		bool fail = 0;
		rep(i,1,n){
			if( s[i]=='1' ) b.insert(x[i]);
			if( s[i]=='1' && s[i+1]=='0' ){
				rep(j,i+1,n) if( s[j]=='0' ) a.insert(x[j]);
				rep(t,0,b0) if( a.insert(b[t]) ){ fail=1; break; }
				if( fail == 1 ) break;
				memset(&a,0,sizeof(a));
				memset(&b,0,sizeof(b));
			}
		}
		printf("%d\n",fail);
	}
	return 0;
}
