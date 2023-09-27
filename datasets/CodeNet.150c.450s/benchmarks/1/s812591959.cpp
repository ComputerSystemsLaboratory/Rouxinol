#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define INF (1<<21)
const int maxn=100000+10;
int n;
int a[maxn];
int L[maxn];
void solve()
{
   L[0]=a[0];
   int len=1;
   for(int i=1;i<n;i++)
   {
       if(L[len-1]<a[i])
       {
           L[len++]=a[i];
       }
       else
       {
            *lower_bound(L,L+len,a[i])=a[i];
       }

   }
   printf("%d\n",len);


}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    solve();

    return 0;
}