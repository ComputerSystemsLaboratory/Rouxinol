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
	inline bool Ins(LL x){for(LL i=60;i>=0;i--)if(x&(1ll<<i)){if(!b[i]){b[i]=x;return true;}x^=b[i];}return false;}
	inline bool can(LL x){for(LL i=60;i>=0;i--)if(x&(1ll<<i)){if(!b[i])return true;x^=b[i];}return false;}
	inline void cls(){memset(b,0,sizeof(b));hv=0;}
}b,c;
inline LB Merge(LB a,LB b)
{
	LB S1(a),S2(a),S;LL i,j,x,y;S.hv=a.hv&&b.hv;
	for(i=0;i<=60;i++)
	if(x=b.b[i])
	{
		y=0;
		for(j=i;j>=0;j--)
		if(x&(1ll<<j))
		{
			if(!S1.b[j]){S1.b[j]=x;S2.b[j]=y;break;}
			x^=S1.b[j];y^=S2.b[j];if(!x){S.b[i]=y;break;}
		}
	}return S;
}
inline LB Xor(LB b,LL v){c.cls();for(LL i=60;i>=0;i--)if(b.b[i]){if(b.b[i]!=v)c.Ins(b.b[i]^v);}if(b.hv)c.Ins(v);if(!b.can(v))c.hv=1;return Merge(b,c);}
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