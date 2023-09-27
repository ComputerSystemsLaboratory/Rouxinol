#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define SZ(x) ((int)x.size())
#define ALL(x) x.begin(),x.end()
#define L(i,u) for (register int i=head[u]; i; i=nxt[i])
#define rep(i,a,b) for (register int i=(a); i<=(b); i++)
#define per(i,a,b) for (register int i=(a); i>=(b); i--)
using namespace std;
typedef long double ld;
typedef long long ll;
typedef unsigned int ui;
typedef pair<int,int> Pii;
typedef pair<ll,ll> Pll;
typedef vector<int> Vi;
template<class T> inline void read(T &x){
	x=0; char c=getchar(); int f=1;
	while (!isdigit(c)) {if (c=='-') f=-1; c=getchar();}
	while (isdigit(c)) {x=x*10+c-'0'; c=getchar();} x*=f;
}
template<class T> T gcd(T a, T b){return !b?a:gcd(b,a%b);}
template<class T> inline void umin(T &x, T y){x=x<y?x:y;}
template<class T> inline void umax(T &x, T y){x=x>y?x:y;}
mt19937 R(chrono::system_clock().now().time_since_epoch().count());

const int N = 666666;
int n;ll a[67],c[N];char s[N];
void ins(ll x){
	per(i,60,0)if(x>>i&1)
		if(!a[i]){a[i]=x;return;}
		else x^=a[i];
}
bool qry(ll x){
	per(i,60,0)if(x>>i&1)x^=a[i];
	return x==0;
}
int main() {
	int T;read(T);while(T--){
		read(n);rep(i,1,n)read(c[i]);scanf("%s",s+1);
		memset(a,0,sizeof(a));bool ok=1;
		per(i,n,1){
			if(s[i]=='0')ins(c[i]);
			else ok&=qry(c[i]);
		}
		printf("%d\n",ok^1);
	}
	return 0;
}
