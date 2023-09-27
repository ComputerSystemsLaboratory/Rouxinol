#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <cfloat>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <time.h>
#include <complex>
#include <vector>
#include<limits>
#include<iomanip>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

const long double pi = 3.141592653589793;

#define debug(x) cout << #x << " = " << (x) << endl;
#define rep(i, n) for(int i = 0;i < n;i++)
#define repi(i, j, n) for(int i = j;i < n;i++)
#define pb push_back
#define mp make_pair
#define mod 998244353
#define F first
#define S second

// #define COMMENT

/*

const int NN = 200090;
ll fact[NN];
ll finv[NN];
ll inv[NN];

void inverse_modulao() {
  fact[0] = fact[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;

  for(int i = 2;i < NN;i++) {
    fact[i] = fact[i-1]*i%mod;
    inv[i] = mod-mod/i*inv[mod%i]%mod;
    finv[i] = finv[i-1]*inv[i]%mod;
  }
}

ll nCr(int n, int r) {
  return fact[n]*finv[r]%mod*finv[n-r]%mod;
}

*/

int t, n, dp[4][220]; string s;
ll A[220];

int solve() {
  cin>>n;
  rep(i,n) cin>>A[i];
  cin>>s;

  const int nbits = 60;
  vector<ll> basis(nbits);

  for(int i = n-1;i >= 0;i--) {
    rep(j, nbits) {
      if((A[i] & (1LL << j)) == 0) continue;
      if(basis[j] == 0) {
        if(s[i] == '0') {
          basis[j] = A[i];break;
        }
        return 1;
      }
      A[i] ^= basis[j];
    }
  }

  return 0;
}

int main() {

 //freopen("input.in","r",stdin);
 //freopen("output.out","w",stdout);

  cin>>t;
  while(t--) {
    cout << solve() << endl;
  }

  return 0;
}
