#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

const int M=1000000007;

using namespace std;

typedef long long ll;

ll pos(ll m, ll n){
  if(n == 0) return 1;
  ll res=pos((m*m) % M, n/2);
  if(n % 2 == 1){
    res=(res*m) % M;
  }
  return res;
}

int main(){
  ll m, n; cin >> m >> n;
  cout << pos(m, n) << endl;
}