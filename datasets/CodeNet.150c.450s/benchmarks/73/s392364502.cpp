#include<iostream>

#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n)   REP(i,0,n)
#define MAX_N 500000

using namespace std;

int bit[MAX_N+1],n,q,com,x,y;

int sum(int i)
{
  int s = 0;
  while(i > 0)
    {
      s += bit[i];
      i -= i & -i;
    }
  return s;
}

void add(int i,int x)
{
  while(i <= n)
    {
      bit[i] += x;
      i += i & -i;
    }
}

int main()
{
  cin >> n >> q;
  rep(_,q)
    {
      cin >> com >> x >> y;
      if(com)cout << sum(y) - sum(x-1) << endl;
      else   add(x,y); 
    }
  return 0;
}