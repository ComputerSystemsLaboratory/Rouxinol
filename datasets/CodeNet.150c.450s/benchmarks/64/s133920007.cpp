#include <iostream>
#include <cstdio>
#include <cstring>
#include <list>
using namespace std;
const int maxn=20+10;
int n,q;
int a[maxn];
int dd;
bool solve(int pos,int d)
{
  if(d<0) return false;
  if(d==0)   return true;
  if(pos<n)
  {
     return solve(pos+1,d-a[pos])||solve(pos+1,d);
  }
  return false;
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&q);
    while(q--)
    {
       scanf("%d",&dd);
       if(solve(0,dd)) printf("yes\n");
       else printf("no\n");
    }

    return 0;
}