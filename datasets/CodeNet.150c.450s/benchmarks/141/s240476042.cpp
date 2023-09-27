#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <set>
#include <stdio.h>
#include <cstdio>
#include <cmath>
#include <complex> 
using namespace std;
typedef complex<double> xy_t;
xy_t P[4];
double x,y;
double a,b,c;
int main() {
	int i=0;
while (cin >> x >> y) {
	P[i] = xy_t(x,y);
	i += 1;
	if (i == 4) {
	a =  ((P[0]-P[3]).real()*(P[1]-P[3]).imag()-(P[0]-P[3]).imag()*(P[1]-P[3]).real())/2;
	b =  ((P[1]-P[3]).real()*(P[2]-P[3]).imag()-(P[1]-P[3]).imag()*(P[2]-P[3]).real())/2;
	c =  ((P[2]-P[3]).real()*(P[0]-P[3]).imag()-(P[2]-P[3]).imag()*(P[0]-P[3]).real())/2;
	bool p = a*b > 0 && b*c > 0;
cout << (p ? "YES" : "NO") << endl;
i = 0;
}
}
}