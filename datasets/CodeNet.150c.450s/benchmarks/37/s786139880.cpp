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
  double a,b,c,d,e,f;
  while(cin>>a>>b>>c>>d>>e>>f){
    double x = (e*c-b*f)/(a*e-b*d);
    double y = (-d*c+a*f)/(a*e-b*d);
    printf("%.3f %.3f\n",x+EPS,y+EPS);
  }
  return 0;
}