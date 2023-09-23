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

int main(){
  int cnt[101] = {0};
  int x;
  while(cin>>x) cnt[x]++;
  int m = -1;
  REP(i,101) m = max(m, cnt[i]);
  REP(i,101) if(m == cnt[i]) cout << i << endl;
  return 0;
}