#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
#define N 212
#define LL long long
int T,n;LL a[N];char sc[N];
struct LB{
	LL b[63];bool hv;
	inline LB(){memset(b,0,sizeof(b));hv=0;}
	inline LL& operator[](const int &x){return b[x];}
	inline LL operator[](const int &x)const{return b[x];}
	inline bool Ins(LL x){for(LL i=60;i>=0;i--)if(x&(1ll<<i)){if(!b[i]){b[i]=x;return true;}x^=b[i];}return false;}
	inline bool can(LL x){for(LL i=60;i>=0;i--)if(x&(1ll<<i)){if(!b[i])return true;x^=b[i];}return false;}
	inline void cls(){memset(b,0,sizeof(b));hv=0;}
}b,c;
inline LB Cap(const LB &A,const LB &B)
{
	LB C(A),I(A),ans;int i,j;LL x,v;ans.hv=A.hv&&B.hv;
	for(i=0;i<=60;i++)if(x=B[i])for(v=0,j=i;j>=0;j--)if(x&(1ull<<j)){if(!C[j]){C[j]=x;I[j]=v;break;}x^=C[j];v^=I[j];if(!x){ans[i]=v;break;}}return ans;
}
inline LB Xor(LB b,LL v){c.cls();for(LL i=60;i>=0;i--)if(b.b[i]){if(b.b[i]!=v)c.Ins(b.b[i]^v);}if(b.hv)c.Ins(v);if(!b.can(v))c.hv=1;return Cap(b,c);}
int main(){
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);int i;for(i=1;i<=n;i++)scanf("%lld",&a[i]);
		scanf("%s",sc+1);b.cls();b.hv=1;
		for(i=n;i>=1;i--)if(sc[i]=='0')b.Ins(a[i]);else b=Xor(b,a[i]);
		printf("%d\n",!b.hv);
	}return 0;
}