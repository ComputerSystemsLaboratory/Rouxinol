#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
#define MOD 1000000007
using namespace std;
signed main() {
  int a,b;
  while(cin>>a>>b,a||b) {
    if (a>b) swap(a,b);
    cout << a << " " << b << endl;
  }  
}

