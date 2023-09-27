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
    int m, y, z, e;

    while(scanf("%d",&e)){
        if(!e) break;
        m = 1<<30;
        for(z=0;z*z*z <= e; z++)
            for(y=0; y*y+z*z*z <= e; y++)
                m = min(e-y*y-z*z*z+y+z, m);
        printf("%d\n",m);
    }

    return 0;
}