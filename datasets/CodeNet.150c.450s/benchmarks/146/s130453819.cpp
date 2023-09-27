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

bool equal(double d){
	return d<0.0+EPS && d>0.0-EPS ;
}
double cross(P a, P b){
	return a.real()*b.imag() - a.imag()*b.real();
}

int main(){
	int n;
	double x1, y1, x2, y2, x3, y3, x4, y4;
	scanf("%d",&n);
	while(n--){
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		P A(x1,y1), B(x2,y2), C(x3,y3), D(x4,y4);
		if( equal(cross(A-B,C-D)) ){
			puts("YES");
		}else{
			puts("NO");
		}
	}
	return 0;
}