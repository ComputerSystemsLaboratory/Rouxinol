#include<bits/stdc++.h>
#define Tp template<typename Ty>
#define Ts template<typename Ty,typename... Ar>
#define Reg register
#define RI Reg int
#define Con const
#define CI Con int&
#define I inline
#define W while
#define N 200
#define LN 63
#define ull unsigned long long
using namespace std;
int n,ans;ull a[N+5],v[LN+5];char op[N+5];
I void Clear() {ans=0;for(RI i=LN;~i;--i) v[i]=0;}
I void Ins(ull x)
{
	for(RI i=LN;~i;--i) if((x>>i)&1) {if(!v[i]) return (void)(v[i]=x);x^=v[i];}
}
I bool Q(ull x)
{
	for(RI i=LN;~i;--i) if((x>>i)&1) {if(!v[i]) return 0;x^=v[i];}return 1;
}
int main()
{
	RI Tt,i;scanf("%d",&Tt);W(Tt--)
	{
		for(Clear(),scanf("%d",&n),i=1;i<=n;++i) scanf("%llu",a+i);scanf("%s",op+1);
		for(ans=1,i=n;i;--i) if(a[i])
			{if(op[i]=='1'&&!Q(a[i])) {ans=0;break;}op[i]=='0'&&(Ins(a[i]),0);}
		putchar(49-ans),putchar('\n');
	}return 0;
}