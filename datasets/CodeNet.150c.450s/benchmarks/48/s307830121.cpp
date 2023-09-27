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
  int e;
  while(cin>>e,e){
    int m=1000000000;
    rep(z,101) rep(y, 1001) {
      int x=e-z*z*z-y*y;
       if (x>=0) cmin(m,x+y+z);
     }
    cout<<m<<endl;
  }
  bye;
}