#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i,n) for (ll i=0; i<n; ++i)
#define all(c) begin(c),end(c)
#define PI acos(-1)
#define oo LLONG_MAX
template<typename T1, typename T2>
bool chmax(T1 &a,T2 b){if(a<b){a=b;return true;}else return false;}
template<typename T1, typename T2>
bool chmin(T1 &a,T2 b){if(a>b){a=b;return true;}else return false;}
/*

*/
int main(){
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  ll N; cin >> N;
  ll ac=0, wa=0, tle=0, re=0;
  rep(i, N){
    string S; cin >> S;
    if (S=="AC")
      ac++;
    if (S=="WA")
      wa++;
    if (S=="TLE")
      tle++;
    if (S=="RE")
      re++;
  }

  cout << "AC x "<< ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
}
