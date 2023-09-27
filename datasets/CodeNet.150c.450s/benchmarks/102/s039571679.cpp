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
#define INF (0x7fffffff)
#else
#define INF (0x7fffffffffffffff)
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

char a[30][30]={};
char n='#';
char o='.';						       

int dfs(int score,int x,int y)
{
  a[y][x]=n;
  score++;
  dprintf("x,y=%2d,%2d = %d\n",x,y,score);
  if(a[y+1][x]==o)
    score=dfs(score,x,y+1);
  if(a[y-1][x]==o)
    score=dfs(score,x,y-1);
  if(a[y][x+1]==o)
    score=dfs(score,x+1,y);
  if(a[y][x-1]==o)
    score=dfs(score,x-1,y);
  
  return score;
}

signed main(void)
{
  while(1)
    {
      in(int,w,h);
      if(w==0)
	break;
      int i,j;
      rep(i,30)rep(j,30)a[i][j]=0;
      int x,y;
      rep(i,h)
	rep(j,w)
	{
	  scanf(" %c",&a[i][j]);
	  if(a[i][j]=='@')
	    x=j,y=i;
	}
      cout<<dfs(0,x,y)<<endl;
    }
  return 0;
}