#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <list>
#include <stack>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <sstream>
#include <complex>
using namespace std;

#define REP(i,a,n) for(i=a; i<n; i++)
#define rep(i,n) REP(i,0,n)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define foreach(it,x) for(typeof(x.begin()) it=x.begin(); it!=x.end(); it++)


int main(){
    int e,x,y,z;
    int res;

    while( cin >> e, e ){
        res = INT_MAX;
        for(z=0; z*z*z <= e; z++){
            for(y=0; y*y + z*z*z <= e; y++){
                x = e - z*z*z - y*y;
                res = min(res, x + y + z);
            }
        }
        printf("%d\n",res);
    }

    return 0;
}