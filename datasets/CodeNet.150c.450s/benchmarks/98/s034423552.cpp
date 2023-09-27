#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30

using namespace std;

int main()
{
    int n,m;
    while(cin >> n >> m)
    {
       if(n == 0 && m == 0) break;
       
       vector<int> a(n),b(m);
       int as = 0,bs = 0;
       rep(i,n)  {
           cin >> a[i];
           as += a[i];
       }
       rep(i,m) {
           cin >> b[i];
           bs += b[i];
       }

       int ans = INF,A = 0,B = 0;
       rep(i,n) {
           rep(j,m) {
               int res = as - a[i] + b[j];
               int res2 = bs - b[j] + a[i];
               if(res == res2) {
                   if(res < ans) {
                       ans = res;
                       A = i;
                       B = j;
                   }
               }
           }
       }

       if(ans == INF) cout << -1 << endl;
       else cout << a[A] << " " << b[B] << endl;
    }

    return 0;
}