// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<map>
// #include<cstring>
// #include<math.h>
// #include<bitset>
// #include<queue>
// #include<set>
// #include<iomanip>
// #include<math.h>
// #include<assert.h>
// #include<string>
// #include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr ll INF = 1LL << 40;
const double INFD = 1e100;
const ll mod = 1000000007;
const double PI = 3.1415926535897932384626433832795028841971;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
// ----------------------------------------------------------------------------


int main(){
  ll N,K;
  cin >> N >> K;
  while(1){
    if(N==0 && K==0){
      break;
    }
    vector<ll> a(N);
    for(int i=0; i<N; i++){
      cin >> a[i];
    }
    vector<ll> S(N+1,0);
    for(int i=1; i<N; i++){
      S[i+1] = S[i] + a[i];
    }
    ll ans=0;
    for(int i=K; i<=N; i++){
      chmax(ans, S[i]-S[i-K]);
    }
    cout << ans << endl;
    cin >> N >> K;
  }
  return 0;
}

