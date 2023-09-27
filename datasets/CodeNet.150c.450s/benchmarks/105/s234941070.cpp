#include<bits/stdc++.h>
using namespace std;
#define cs const
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define ll long long
#define bg begin

namespace IO{

cs int RLEN=1<<22|1;
char ibuf[RLEN],*ib,*ob;
inline char gc(){
	(ib==ob)&&(ob=(ib=ibuf)+fread(ibuf,1,RLEN,stdin));
	return (ib==ob)?EOF:*ib++;
}
inline int read(){
	char ch=gc();
	int res=0;bool f=0;
	while(!isdigit(ch))f=ch=='-',ch=gc();
	while(isdigit(ch))res=(res*10)+(ch^48),ch=gc();
	return f?-res:res;
}
inline ll readll(){
	char ch=gc();
	ll res=0;bool f=0;
	while(!isdigit(ch))f=ch=='-',ch=gc();
	while(isdigit(ch))res=(res*10)+(ch^48),ch=gc();
	return f?-res:res;
}
inline int readstring(char *s){
	int top=0;char ch=gc();
	while(isspace(ch))ch=gc();
	while(!isspace(ch)&&ch!=EOF)s[++top]=ch,ch=gc();
	s[top+1]='\0';return top;
}

}
using IO::read;
using IO::readll;
using IO::readstring;

template<typename tp>inline void chemx(tp &a,tp b){(a<b)?(a=b):0;}
template<typename tp>inline void chemn(tp &a,tp b){(a>b)?(a=b):0;}

cs int N=205;
ll bs[66],a[N];
int n;
char str[N];

inline void insert(ll x){
	for(int i=60;~i;i--)if((x>>i)&1){
		if(bs[i])x^=bs[i];
		else {bs[i]=x;return;}
	}
}
inline bool find(ll x){
	for(int i=60;~i;i--)if((x>>i)&1){
		if(!bs[i])return 0;
		x^=bs[i];
	}return 1;
}
inline void solve(){
	memset(bs,0,sizeof(bs));
	n=read();
	for(int i=1;i<=n;i++)a[i]=readll();
	readstring(str);
	for(int i=n;i>=1;i--){
		if(str[i]=='0')insert(a[i]);
		else {
			if(find(a[i]))continue;
			else {puts("1");return;}
		}
	}puts("0");
}

int main(){
	#ifdef Stargazer
	freopen("lx.in","r",stdin);
	#endif
	int T=read();
	while(T--)solve();
	return 0;
}