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
  int n; cin>>n;
  while(n-->0){
    double x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    double xx1 = x1 - x2;
    double yy1 = y1 - y2;
    double xx2 = x3 - x4;
    double yy2 = y3 - y4;
    if(xx1 == 0 && xx2 == 0){
      cout << "YES" << endl;
      continue;
    }
    double r = xx1 / xx2;
    yy2 *= r;
    if(abs(yy1-yy2) < EPS)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  
  return 0;
}