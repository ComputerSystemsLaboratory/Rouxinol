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
#include<map>

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

int memo[50][12][12];

int search(int s, int n, int p){
  if(s == 0 && n == 0)
    return 1;
  if(n == 0 || s < 0 || p == 10)
    return 0;
  if(memo[s][n][p]!=-1)
    return memo[s][n][p];
  return memo[s][n][p] = search(s,n,p+1) + search(s-p,n-1,p+1);
}

int main(){
  int n,s;
  memset(memo,-1,sizeof(memo));
  while(cin>>n>>s,n+s){
    if(s >= 50 || n >= 12)
      cout << 0 << endl;
    else
      cout << search(s,n,0) << endl;
  }
  return 0;
}