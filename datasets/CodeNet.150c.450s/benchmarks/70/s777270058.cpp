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

const int days[12] = {
  31,29,31,30,
  31,30,31,31,
  30,31,30,31
};

const char *date[7] = {
  "Monday",
  "Tuesday",
  "Wednesday",
  "Thursday",
  "Friday",
  "Saturday",
  "Sunday"
};

int ans[12][31];

int main(){
  int d = 3;
  REP(i,12){
    REP(j,days[i]){
      ans[i][j] = (d++)%7;
    }
  }
  int a,b;
  while(cin>>a>>b,a)
    cout << date[ans[a-1][b-1]] << endl;

  return 0;
}