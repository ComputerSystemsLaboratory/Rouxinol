#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <numeric>
#include <iomanip>

#define REP(i,n) for(i=0; i < (n); i++)
#define REPONE(i, n) for(i=1; i <= (n); i++)
#define LOOP(n) for(int loopCount=1; loopCount <= (n); loopCount++)
#define ITER(c) __typeof((c).begin())
#define EACH(c,it) for(ITER(c) it =(c).begin(); it!=(c).end(); it++)
#define SZ(c) ((int) (c).size())
#define ALL(c) c.begin(), c.end()
#define SUM(c) accumulate(ALL(c), 0)
#define EXIST(c,v) (find(ALL(c), (v)) != (c).end())
#define PB push_back
#define MP make_pair

using namespace std;
static const double EPS = 1e-9;
static const double PI = 3.141592653589793238462643383279;
typedef long long ll;

int main(){
    int a, b, c, d, e, f;
    while(cin>>a>>b>>c>>d>>e>>f){
        double det = a*e-b*d;
        double x = (c*e-b*f)/det;
        double y = (a*f-c*d)/det;
        x = (int)(x*1000)/1000.0;
        y = (int)(y*1000)/1000.0;
        printf("%.3f %.3f\n", x, y);
    }
    return 0;
}