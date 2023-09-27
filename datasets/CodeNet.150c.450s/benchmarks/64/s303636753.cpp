#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <algorithm>

#define REP( i, n) for( int i = 0; i < (n); ++i)
#define FOR( i, a, b) for( int i = (a); i < (b); ++i)

#define pb push_back

const int INF = 100100100;
const int MOD = (int)1e9 + 7;

using ll = long long;

using namespace std;

std::vector<int> a;
int n,q;

bool solve( int i, int sum){
  bool res = false;
  if( i == n) return sum == 0;
  res = solve( i+1, sum-a[i]) || solve( i+1, sum);
  return res;
}



int main(){


  cin >> n;
  a.resize(n);
  REP( i, n){
    cin >> a[i];
  }

  cin >> q;
  REP( i, q){
    int m;
    cin >> m;
    if( solve( 0, m)){
      cout << "yes" << endl;
    }else{
      cout << "no" << endl;
    }
  }

}