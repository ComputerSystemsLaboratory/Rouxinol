#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,n) for(long long int i=0;i<(n);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI 3.14159265358479

typedef long long int ll;
typedef vector<long long int> vi;

int main(){
	double  a, b, c, d, e, f, x, y;
	while (cin>>a>>b>>c>>d>>e>>f){
		if (d < 0){
			d = -d;
			e = -e;
			f = -f;
		}
		if (a == 0){
			y = c / b;
			x = (f - e*y) / d;
		}
		else if (b == 0){
			x = c / a;
			y = (f - e*x) / d;
		}
		else if (a != 0 & b != 0){
			x = (b*f - c*e) / (b*d - a*e);
			y = (c*d - a*f) / (b*d - a*e);
		}
		printf("%.3lf %.3lf\n", x, y);
	}
	return 0;
}