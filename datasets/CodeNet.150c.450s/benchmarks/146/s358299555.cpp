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
xy_t P[2];
int N;
double x,y,z,w;
const double eps = 1e-11;
int main() {
cin >> N;
for( int j = 0;j < N ;j++) {
for(int i = 0;i < 2;i++) {
	cin >> x >> y >> z >> w;
	P[i] = xy_t(z-x,w-y);
}
	double s =  (P[0].real()*P[1].imag()-P[0].imag()*P[1].real())/2;
bool p;
if (abs(s) < eps) p = true;
else p = false;
cout << (p ? "YES" : "NO") << endl;
}
}