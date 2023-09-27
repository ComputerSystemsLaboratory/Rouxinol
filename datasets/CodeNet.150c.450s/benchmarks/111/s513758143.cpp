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

signed main()
{  
  int a;
  int n;
  ll dp[101][21]={};
  int i,j;
 
  cin>>n;
  cin>>a;
  dp[0][a]=1;
 
  for(i=1;i<n-1;i++)
    {
      cin>>a;
      for(j=0;j<=20;j++)
	{
	  if(j-a>=0)
	    dp[i][j-a]+=dp[i-1][j];
	  if(j+a<=20)
	    dp[i][j+a]+=dp[i-1][j];
	}
    }
  cin>>a;
  cout<<dp[n-2][a]<<endl;
}