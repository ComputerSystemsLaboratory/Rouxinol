#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>
#include <set>
#include <cstdlib>
#include <queue>
#include <map>
#include <cstdio>

using namespace std;

typedef long long llint;
typedef long double ld;
#define inf 1e18
#define mod 1000000007
//priority_queue<llint,vector<llint>,greater<llint>> que;
//priority_queue<llint> q;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

llint a,b,c;

void solve(){
  cin >> a >> b >>c;
  if(a<b && b <c)cout << "Yes";
  else cout << "No";
  cout << endl;
}

int main() {
  solve();
  return 0;
}

