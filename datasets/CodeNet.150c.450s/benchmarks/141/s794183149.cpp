
#define _USE_MATH_DEFINES
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <memory>
#include <string>

#include <algorithm>
#include <complex>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <vector>

using namespace std;

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#define __typeof__ decltype
#endif

#define ITER(c)         __typeof__((c).begin())
#define FOREACH(it, c)  for (ITER(c) it=(c).begin(); it != (c).end(); ++it)
#define RITER(c)        __typeof__((c).rbegin())
#define RFOREACH(it, c) for (RITER(c) it=(c).rbegin(); it != (c).rend(); ++it)
#define REP(i, n)       REPEAT(i, 0, n)
#define REPEAT(i, k, n) for (int i = (k); i < (n); ++i)
#define REVREP(i, n)    for (int i = ((n)-1); i >= 0; --i)
#define ESIZEOF(A)      (sizeof(A)/sizeof((A)[0]))
#define MIN(p1,p2)      (((p1)<(p2))?(p1):(p2))
#define MAX(p1,p2)      (((p1)>(p2))?(p1):(p2))
#define CIN_NO_SYNC     do { cin.tie(0); ios_base::sync_with_stdio(false); } while(0)

#define X real()
#define Y imag()
typedef double D;
typedef complex<double>P;

D inprd(const P &a, const P &b){ return (conj(a) * b).X; }
D outprd(const P &a, const P &b){ return (conj(a) * b).Y; }
D sign(D d){ return (d<0)?-1:d>0?1:0; }
 
int main(void){
    CIN_NO_SYNC;
    double x1,y1,x2,y2,x3,y3,xp,yp;
    while(cin >>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
        P p12(x2-x1,y2-y1), p23(x3-x2,y3-y2), p31(x1-x3,y1-y3);
        P p1p(xp-x1,yp-y1), p2p(xp-x2,yp-y2), p3p(xp-x3,yp-y3);
        if(sign(outprd(p12, p1p)) == sign(outprd(p23, p2p)) && sign(outprd(p23, p2p)) == sign(outprd(p31, p3p))){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}