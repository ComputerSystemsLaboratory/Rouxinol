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
    int n;
    cin >> n;
    if(n == 0) break;
    int A[1010] = {};
    rep(i,0,n) cin >> A[i];

    int min = INF;
    rep(i,0,n){
      rep(j,i+1,n){
        if(abs(A[i]-A[j]) < min){
          min = abs(A[i]-A[j]);
        }
      }
    }
    print(min);
  }


  return 0;
}

