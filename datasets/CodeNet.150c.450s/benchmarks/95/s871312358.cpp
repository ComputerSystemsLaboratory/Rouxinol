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

bool solve(){
  ll n;std::cin >> n;
  if(n==0) return false;

  bool l = false, r = false;
  ll cnt = 0;
  for(int i=0;i<n;i++){
    string s;std::cin >> s;
    if(s=="lu"||s=="ld") l ^= 1;
    else r ^= 1;

    if(cnt%2==0&&(l==r&&r==1)) cnt++;
    else if(cnt%2&&(l==r&&r==0)) cnt++;
  }
  std::cout << cnt << '\n';
  return true;
}
int main(int argc, char const *argv[]) {
  while(true) if(!solve()) break;
  return 0;
}

