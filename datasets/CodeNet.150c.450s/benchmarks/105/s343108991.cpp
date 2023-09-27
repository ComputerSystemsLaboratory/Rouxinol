#include<bits/stdc++.h>
using namespace std;
#define res register int
#define ll long long
//#define cccgift
#define lowbit(x) ((x)&-(x))
#define rep(i,l,r) for(res i=l,_r=r;i<=_r;++i)
#define per(i,r,l) for(res i=r,_l=l;i>=_l;--i)
#define mkp make_pair
#define pb push_back
#define mem0(a) memset(a,0,sizeof(a))
#define mem0n(a,n) memset(a,0,n*sizeof(a[0]))
#define iter(x,v) for(res v,_p=head[x];v=ver[_p],_p;_p=nxt[_p])
#ifdef cccgift //by lqh
#define SHOW(x) cerr<<#x"="<<(x)<<endl
#else
#define SHOW(x) 0
#endif
//#define getchar()(ip1==ip2&&(ip2=(ip1=ibuf)+fread(ibuf,1,1<<21,stdin),ip1==ip2)?EOF:*ip1++)
//char ibuf[1<<21],*ip1=ibuf,*ip2=ibuf;
template<typename T>
inline void read(T &x)
{
    static char ch;bool f=1;
    for(x=0,ch=getchar();!isdigit(ch);ch=getchar()) if(ch=='-') f=0;
    for(;isdigit(ch);x=(x<<1)+(x<<3)+(ch^48),ch=getchar());x=f?x:-x;
}
template<typename T>
void print(T x)
{
    if (x<0) x=-x,putchar('-');
    if (x>9) print(x/10);
    putchar(x%10+48);
}
template<typename T>
inline void print(T x,char ap) {print(x);if (ap) putchar(ap);}
template<typename T>
inline void chkmax(T &x,const T &y) {x=x<y?y:x;}
template<typename T>
inline void chkmin(T &x,const T &y) {x=x<y?x:y;}
struct node{
	ll d[64];
	void clear() {mem0(d);}
	void ins(ll x) {
		per(i,62,0)
		  if((x>>i)&1) {
		  	if(d[i]) x^=d[i];
		  	else {d[i]=x;break;}
		  }
	}
	bool check(ll x) {
		per(i,62,0)
		  if((x>>i)&1) {
		  	if(d[i]) x^=d[i];
		  	else return false;
		  }
		return true;
	}
} t0;
int t,n;
ll a[201];
char s[201];
int main()
{
	read(t);
	while(t--) {
		t0.clear(),read(n);
		rep(i,1,n) read(a[i]);scanf("%s",s+1);
		if(s[n]=='1') {puts("1");continue;}
		bool flag=false;
		per(i,n,1) if(s[i]=='0') t0.ins(a[i]);
		else if(!t0.check(a[i])) {flag=true;break;}
		puts(flag?"1":"0");
	}
	return 0;
}
/* stuff you should look for
    * int overflow, array bounds
    * special cases (n=1?), set tle
    * do something instead of nothing and stay organized
*/ 