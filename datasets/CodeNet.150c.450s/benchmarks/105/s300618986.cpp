#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define all(x) x.begin(),x.end()
#define cmin(a,b) (a>b?a=b:a)
#define cmax(a,b) (a<b?a=b:a)
#define mem(a,k) memset(a,k,sizeof(a))
#define lop(i,s,t) for(int i=s;i<(t);++i)
#define rep(i,s,t) for(int i=s;i<=(t);++i)
#define dec(i,s,t) for(int i=s;i>=(t);--i)
#define fore(i,v) for(int i=g[v],d=es[i].d;i;i=es[i].nxt,d=es[i].d)
using namespace std;

#define Pr(f,...) fprintf(stderr,f,##__VA_ARGS__),fflush(stderr)

typedef long long ll;

template<typename T>
void read(T &x){
	x=0; 
	char c;
	for(c=getchar();!isdigit(c);c=getchar()); 
	for(;isdigit(c);c=getchar())x=x*10+c-'0'; 
}

const int N=205,P=1e9+7,L=62;

int mul(int a,int b){ return 1ll*a*b%P; }
//int add(int a,int b){ a+=b; return a>=P?a-P:a; }
int sub(int a,int b){ a-=b; return a<0?a+P:a; }
int gcd(int a,int b){ return !b?a:gcd(b,a%b); }

int n,T;
ll a[N],pr[L+2],bk[L+2],ans;
char s[N];
void add(ll *b,ll x){
	dec(i,L,0){
		if((x>>i)&1){
			if(b[i])x^=b[i];
			else {b[i]=x; break; }
		}
	}
}
bool test(ll *b,ll x){
	dec(i,L,0)if((x>>i)&1){
		x^=b[i];
	}
	return x==0;
}
bool equal(ll *b1,ll *b2){
	dec(i,L,0)if(b1[i]){
		if(!test(b2,b1[i]))return false;
	}
	return true;
}

int main(int argc,char *argv[]){
#ifdef CURIOUSCAT
	freopen("d.in","r",stdin); 
#endif
	read(T); 
	while(T--){
		read(n); 
		rep(i,1,n)read(a[i]); 
		scanf("%s",s+1); 
		ans=0;
		mem(bk,0);
		dec(i,n,1){
			if(s[i]=='0')add(bk,a[i]);
			else ans|=!test(bk,a[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
