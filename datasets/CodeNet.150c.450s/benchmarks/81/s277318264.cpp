#include <iostream>
#include <string>
#include <queue>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <ctype.h>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
#define ll long long
using namespace std;
const int mod = 1e9 + 7;
const int N = 100000+5;
int mp[15][15];
const int inf = 10000;
int d[15][15];
int main()
{
   int n;
   while(cin >> n && n)
   {
   for(int i = 0; i <= 10; i++)
   {
       for(int j = 0; j <= 10; j++)
       {
           mp[i][j] = inf;
       }
       mp[i][i] = 0;
   }
   int m = 0;
   for(int i = 0; i < n; i++)
   {
       int a,b,c;
       scanf("%d%d%d",&a,&b,&c);
       mp[a][b] = mp[b][a] = min(mp[a][b],c);
       m = max(m,max(a,b));
   }
   for(int k = 0; k <= m; k++)
   {
       for(int i = 0; i <= m; i++)
       {
           for(int j = 0; j <= m; j++)
           {
               mp[i][j] = min(mp[i][k] + mp[k][j],mp[i][j]);
           }
       }
   }
   int ans = 10000,p = 0;
   for(int i = 0; i <= m; i++)
   {
       int now = 0;
    //   cout <<i <<endl;
       for(int j = 0; j <= m; j++)
       {
           if(mp[i][j] != inf)
           {
               now += mp[i][j];
             //  cout <<now <<"      " <<mp[i][j] << endl;
           }
       }
       if(now < ans)
       {
           p = i;
           ans = now;
       }
   }
   printf("%d %d\n",p,ans);
  }
}

