#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
#include <complex>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define EPS 1e-8

typedef complex<double> P;

double cross(P a, P b){
	return a.real()*b.imag() - a.imag()*b.real();
}
int main(){
	double x1,y1,x2,y2,x3,y3,xp,yp; // a x b  = ax*by - ay*bx
	while(~scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)){
		P ta(x1,y1), tb(x2,y2), tc(x3,y3), td(xp,yp);

		double f1 = cross(ta-tb,td-tb);
		double f2 = cross(tb-tc,td-tc);
		double f3 = cross(tc-ta,td-ta);
		
		if( (f1+EPS<0.0 && f2+EPS<0.0 && f3+EPS<0.0) || (f1-EPS>0.0 && f2-EPS>0.0 && f3-EPS>0.0) ){
			puts("YES");
		}else{
			puts("NO");
		}

	}
	return 0;
}