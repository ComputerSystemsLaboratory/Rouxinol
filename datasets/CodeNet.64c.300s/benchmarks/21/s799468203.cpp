#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define MIN(a,b) (a>b?b:a)
#define MAX(a,b) (a>b?a:b)

int main(void)
{
  double in[6];
  while (cin >> in[0]) {
    FOR(i,1,6) cin >> in[i];
    double x,y;
    y=(in[5]-in[2]*in[3]/in[0])/(in[4]-in[1]*in[3]/in[0]);
    x=(in[2]-in[1]*y)/in[0];
    x*=1000;
    x=round(x);
    x/=1000;
    y*=1000;
    y=round(y);
    y/=1000;
    cout << fixed << setprecision(3) << x << ' ' << y << endl;
  }

  return 0;
}