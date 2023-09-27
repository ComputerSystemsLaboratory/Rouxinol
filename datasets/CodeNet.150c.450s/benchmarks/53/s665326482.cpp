#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define Rep(i, a, b) for(int i = a; i <= b; i++)
#define _GLIBCXX_DEBUG
#define Vl vector<ll>
#define Vs vector<string>
#define Vp vector<pair<ll, ll>>
#define ll long long
#define ALL(v) (v).begin(),(v).end()
using namespace std;  
const double pi = acos(-1.0);
const ll MOD = 1e9 + 7;
const ll INF = 1LL << 60;


int main() {
  ll n; cin >> n;
  vector<ll> factor;

  cout << n << ':';

  Rep(i, 2, sqrt(n)){
    while(n%i == 0){
      factor.push_back(i);
      n /= i;
    }
    if(n == 1) break;
  }
  if(n != 1) factor.push_back(n);

  rep(i, 0, factor.size()){
    cout << " " << factor[i];
  }
  cout << endl;


  return 0;
}

