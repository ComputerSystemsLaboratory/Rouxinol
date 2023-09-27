#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<queue>
#include<vector>
#include<ctime>
#include<map>
#include<bitset>
#include<set>
#include<assert.h>
#include<chrono>
#include<random>
#include<iostream>
#define LL long long
#define mp(x,y) make_pair(x,y)
#define pll pair<long long,long long>
#define pii pair<int,int>
#define SZ(x) ((int)x.size())
#define VI vector<int>
using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
inline LL read()
{
	LL f=1,x=0;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
int stack[20];
template<typename T>inline void write(T x)
{
	if(x<0){putchar('-');x=-x;}
    if(!x){putchar('0');return;}
    int top=0;
    while(x)stack[++top]=x%10,x/=10;
    while(top)putchar(stack[top--]+'0');
}
template<typename T>inline void pr1(T x){write(x);putchar(' ');}
template<typename T>inline void pr2(T x){write(x);putchar('\n');}
template<typename T>inline void chkmin(T &x,T y){x=x<y?x:y;}
template<typename T>inline void chkmax(T &x,T y){x=x>y?x:y;}
const int MAXN=205;
int n;LL a[MAXN];
LL p[MAXN];
bool check(LL x)
{
	for(int i=62;i>=0;i--)if(x&(1LL<<i))
	{
		if(!p[i])return false;
		x^=p[i];
	}return true;
}
void insert(LL x)
{
	for(int i=62;i>=0;i--)if(x&(1LL<<i))
	{
		if(!p[i]){p[i]=x;return ;}
		x^=p[i];
	}
}
char ch[MAXN];
void solve()
{
	memset(p,0,sizeof(p));
	n=read();
	for(int i=1;i<=n;i++)a[i]=read();
	scanf("%s",ch+1);
	bool flag=true;
	for(int i=n;i>=1;i--)
	{
		if(ch[i]=='1')
			flag&=check(a[i]);
		else insert(a[i]);
	}
	if(!flag)pr2(1);
	else pr2(0);
}
int main()
{
	#ifdef Rose
		double BeginJudgeTime=clock();
	#endif
	for(int __=read();__;--__)solve();
	#ifdef Rose
		double EndJudgeTime=clock();
		cerr<<"JudgeTime is"<<" ";
		cerr<<(EndJudgeTime-BeginJudgeTime)/CLOCKS_PER_SEC<<endl;
	#endif
	return 0;
}
