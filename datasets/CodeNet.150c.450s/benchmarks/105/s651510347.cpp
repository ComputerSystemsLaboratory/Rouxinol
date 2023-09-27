#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <algorithm>
#include <set>
#include <map>
#include <bitset>
#include <cmath>
#include <functional>
#include <iomanip>
#define vll vector<ll>
#define vvvl vector<vvl>
#define vvl vector<vector<ll>>
#define VV(a, b, c, d) vector<vector<d> >(a, vector<d>(b, c))
#define VVV(a, b, c, d) vector<vvl>(a, vvl(b, vll (c, d)));
#define re(c, b) for(ll c=0;c<b;c++)
#define all(obj) (obj).begin(), (obj).end()
typedef long long int ll;
typedef long double ld;
using namespace std;

int solve(){
  ll n;std::cin >> n;
  vll a(n);re(i, n) std::cin >> a[i];
  string s;std::cin >> s;
  vvl dat = VV(61, 61, 0, ll);

  for(int i=n-1;i>=0;i--){
    if(s[i]=='1'){
      for(int j=0;j<61;j++){
        if(!dat[j][j]) continue;
        if(!((a[i]>>j)&1)) continue;
        for(ll k=0;k<61;k++)a[i] ^= (dat[j][k]<<k);
      }
      if(a[i]) return 1;
    }else{
      for(ll j=0;j<61;j++){
        if(((a[i]>>j)&1)==0) continue;
        if(!dat[j][j]){
          for(int k=0;k<61;k++) dat[j][k] = ((a[i] >> k)&1);
          break;
        }
        for(ll k=0;k<61;k++) a[i] ^= (dat[j][k]<<k);
      }
    }
  }
  return 0;
}
int main(int argc, char const *argv[]) {
  ll T;std::cin >> T;
  re(t, T) std::cout << solve() << '\n';
  return 0;
}
