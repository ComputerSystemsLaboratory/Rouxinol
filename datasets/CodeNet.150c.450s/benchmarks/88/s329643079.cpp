#include <bits/stdc++.h>
#define int long long
#define main signed main()
// #define main int main()
#define bye return 0
#define loop(i, a, n) for (int i = (a); i < (n); i++)
#define rep(i, n) loop(i, 0, n)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define prec(n) fixed << setprecision(n)
#define stlice(from, to) substr(from, (to) - (from) + 1)
#define min(...) min({__VA_ARGS__})
#define max(...) max({__VA_ARGS__})
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
using namespace std;
template<typename A, typename B> bool cmin(A &a, const B &b) { if (a > b) { a = b; return true; } else return false; }
 
main {
  int h,w;
  while(cin>>h>>w,h){
    int r=h*h+w*w;
    for(int f=0;;r++,f++) loop(H, 1, r) {
      if (!f&&H<=h) continue;
      int U=r-H*H;
      if (U>H*H) for(int i=0;i*i<=U;i++) if (i*i==U) {
         cout<<H<<' '<<sqrt(U)<<endl;
          goto a;
       }
     }
a:;
  }
  bye;
}