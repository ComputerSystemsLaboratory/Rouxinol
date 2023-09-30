#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define debug(x) cerr<<#x<<" = "<<x
#define sp <<"  "
#define el <<endl
#define fgx cerr<<" ---------------------------------------------- "<<endl
#define uint unsigned int 
#define ULL unsigned long long
#define LDB long double
#define DB double
#define pii pair<int,int>
#define pli pair<LL,int>
#define mp make_pair
#define pb push_back
inline LL read(){
	LL nm=0; bool fh=true; char cw=getchar();
	for(;!isdigit(cw);cw=getchar()) fh^=(cw=='-');
 	for(;isdigit(cw);cw=getchar()) nm=nm*10+(cw-'0');
	return fh?nm:-nm;
}
#define M 530010
#define mod 998244353
namespace  CALC{
	inline int add(int x,int y){return (x+y>=mod)?(x+y-mod):(x+y);}
	inline int mns(int x,int y){return (x-y<0)?(x-y+mod):(x-y);}
	inline int mul(LL x,LL y){return x*y%mod;}
	inline void upd(int &x,int y){x=(x+y>=mod)?(x+y-mod):(x+y);}
	inline void dec(int &x,int y){x=(x-y<0)?(x-y+mod):(x-y);}
	inline int qpow(int x,int sq){LL res=1;for(;sq;sq>>=1,x=mul(x,x))if(sq&1)res=mul(res,x);return res;}
}using namespace CALC;
LL a[M],p[63];
char s[M];
int n;
inline bool ins(LL num){
	for(int i=62;i>=0;--i) if((num>>i)&1){
		if(!p[i]){p[i]=num;return true;}
		num^=p[i];
	} return false;
}
inline bool solve(){
	n=read(),memset(p,0,sizeof(p));
	for(int i=1;i<=n;i++) a[i]=read();
	scanf("%s",s+1);
	for(int i=n;i>=1;--i){
		if(s[i]=='1'){if(ins(a[i])) return true;}
		else ins(a[i]);
	} return false;
}
int main(){
	for(int Cas=read();Cas;--Cas) puts(solve()?"1":"0");
	return 0;
}