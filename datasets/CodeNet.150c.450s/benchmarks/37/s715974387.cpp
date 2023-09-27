#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <cstring>
#include <climits>
#include <queue>
using namespace std;

#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define EPS 1e-9

int main(){
	double a,b,c,d,e,f;
	while(~scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)){
		double x = (c*e - b*f) / (a*e - b*d) ;
		double y = (a*f - d*c) / (a*e - d*b) ; 
		printf("%.3lf %.3lf\n",x+EPS,y+EPS);
	}
	return 0;
}