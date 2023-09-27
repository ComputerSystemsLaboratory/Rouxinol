#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <functional>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <cassert>
#include <exception>
#include <numeric>
using namespace std;
typedef long long ll;
typedef string str;
typedef pair<ll,ll> P;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<str> vs;
typedef vector<P> vp;
#define rep(i,a,n) for(ll i=(a); i<(n); ++i)
#define rrep(i,a,n) for(ll i=(a); i>(n); --i)
#define erep(i,a,n) for(ll i=(a); i<=(n); ++i)
#define rerep(i,a,n) for(ll i=(a); i>=(n); --i)
#define all(c) (c).begin(),(c).end()
#define pb push_back
#define mp make_pair
#define print(X) cout << (X) << endl
#define _ << " " <<
static const int INF = 1e+9+7;

int main(){
  while(true){
    int n, n_min, n_max;
    cin >> n >> n_min >> n_max;
    if(n == 0 && n_max == 0 && n_min == 0) break;
    int A[1010] = {};
    rep(i,0,n) cin >> A[i];

    int tmp = 0;
    int num = 0;
    rep(i,n_min-1, n_max){
      if(tmp <= A[i] - A[i+1]){
        tmp = A[i] - A[i+1];
        num = i+1;
      }
    }
    print(num);
  }
  
  return 0;
}

