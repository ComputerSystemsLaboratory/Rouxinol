#include <iostream>
using namespace std;

typedef long long ll;

ll n,k;
ll w[100001];

bool C( int p ) {
  ll sum = 0;
  ll cnt = 0;

  for ( ll i = 0; i < n; i++ ) {
    sum += w[i];
    while ( sum > p ) {
      sum = w[i];
      cnt++;
      if ( cnt == k )return false;
    }
  }
  return true;
}

int main() {
  cin >> n >> k;
  for ( ll i = 0; i < n; i++ ) cin >> w[i];
  ll lb = 0,ub = 1000000000;
  for ( int i = 0; i < 1000; i++ ) {
    ll mid = (lb + ub) / 2;
    if (C(mid)) ub = mid;
    else lb = mid;
  }

  cout << ub << endl;
  return 0;
}