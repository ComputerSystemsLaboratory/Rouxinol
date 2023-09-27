#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<complex>
#include<cfloat>
#include<cassert>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define EPS (1e-10)
using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef complex<double> P;

#define PI (3.1415926535)
#define EPS (1e-10)

int main(){
  int n;
  while(cin>>n,n){
    vector<int> a(n);
    vector<int> s(n+1);
    int ans = INT_MIN;
    REP(i,n){
      cin>>a[i];
      s[i+1] = s[i];
      s[i+1] += a[i];
    }
    REP(i,n) for(int j=i+1; j<=n; j++){
      ans = max(ans, s[j]-s[i]);
    }
    cout << ans << endl;
  }
  return 0;
}