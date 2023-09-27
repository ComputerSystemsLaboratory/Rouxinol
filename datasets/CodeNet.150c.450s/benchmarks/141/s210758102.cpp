#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <set>
#include <iostream>
#include <map>
#include <functional>
#include <cstdlib>
#include <numeric>
#include <queue>
#include <complex>
#include <sstream>
#include <stack>

using namespace std;

#define reep(i, f, n) for (int i = f; i < n; ++i)
#define rep(i, n) reep(i, 0, n)


int main(){
    double x1,x2,x3,y1,y2,y3,xp,yp;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)!=EOF){
        double d1 = (x2-x1)*(yp-y1) - (xp-x1)*(y2-y1);
        double d2 = (x3-x2)*(yp-y2) - (xp-x2)*(y3-y2);
        double d3 = (x1-x3)*(yp-y3) - (xp-x3)*(y1-y3);
        if (( d1<0 && d2<0 && d3<0 ) || ( d1>0 && d2>0 && d3>0 )) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
