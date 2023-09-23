#include<iostream>
#include<iomanip>
#include<queue>
#include<string>
#include<stack>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<cassert>
#include<ctime>
#include<algorithm>
#include<utility>
#include<map>
#include<set>
#include<vector>
#include<functional>

using namespace std;

#ifdef DEBUG
#define dprintf      printf
#define dout(x)      cout<<#x" = "<<(x)<<endl
#define darray(x,n)    {int i;rep(i,n)cout<<#x"["<<i<<"] = "<<*((x)+i)<<endl;}
#define dloop(i,s,g) for((i)=(s);(i)<(g);(i)++)
#define drep(i,n)    for((i)=0;(i)<(n);(i)++)
#define dstop()      scanf("%*c")
#else
#define dprintf      (1)?0:printf
#define dout(x)
#define darray(x,n)
#define dloop(i,s,g) if(1){}else
#define drep(i,n)    if(1){}else
#define dstop()      if(1){}else
#endif

#define F    first
#define S    second
#define pb   push_back
#define mp   make_pair

#define loop(i,s,g) for((i)=(s);(i)<(g);(i)++)
#define rep(i,n)    for((i)=0;(i)<(n);(i)++)
#define all(x)      (x.begin(),x.end())
#define in(T,...) T __VA_ARGS__; impl(__VA_ARGS__);
#define array(T,id,n) T id[n]; rep(i,n)cin>>id[i];

//#define int long long;
#ifndef int
#define INF  (0x7fffffff)
#else
#define LINF (0x7fffffffffffffff)
#endif

typedef  long long           ll;
typedef  unsigned            ui;
typedef  unsigned long long  ull;
typedef  pair<int,int>       i_i;
typedef  pair<ll,int>        ll_i;
typedef  pair<ll,ll>         ll_ll;
typedef  pair<double,int>    d_i;
typedef  pair<double,double> d_d;

void impl(){};
template <typename T,typename... TS >
void impl(T &head,TS &... tail)
{
  cin>>head;
  impl(tail ...);
}

int dp[20][20];

signed main(void)
{
  while(1)
    {
      int i,j,k;
      int a,b;
      int n;
      int x[40]={},y[40]={};
      cin>>a>>b;
      if(!a)break;
      cin>>n;
      rep(i,n)
	cin>>x[i]>>y[i];
      dprintf("-------------------------\n");
      rep(i,a)
        rep(j,b)
	  {
	    dp[i+1][j+1]=dp[i+1][j]+dp[i][j+1];
	    if(i==0&&j==0)dp[i+1][j+1]=1;
	    rep(k,n)
	      if(x[k]==i+1&&y[k]==j+1)
		{
		  dp[i+1][j+1]=0;
		  break;
		}
	    dout(dp[i+1][j+1]);
	  }
      dprintf("-------------------------\n");
      cout<<dp[a][b]<<endl;
    }
  return 0;
}