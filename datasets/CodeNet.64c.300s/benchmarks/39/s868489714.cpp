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

int main(){
  int n;
  while(cin>>n){
    int ans = 0;
    REP(a,10) REP(b,10) REP(c,10){
      int d = n - a - b - c;
      if( d >= 0 && d <= 9) ans++;  
    }
    cout << ans << endl;
  }
  return 0;
}