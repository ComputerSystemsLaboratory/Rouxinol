#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <ctime>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <complex>

using namespace std;

typedef complex<double> xy_t;
double x[4], y[4];
int n;
const double eps = 1e-11;

double cross_product(xy_t a, xy_t b) { return (conj(a)*b).imag(); }

int main(void){

	cin >> n;

	for(int i = 0; i < n; i++){
		for (int j = 0; j < 4; ++j){
			cin >> x[j] >> y[j];
		}
		

		xy_t a[2] = {
			xy_t(x[0], y[0]) - xy_t(x[1], y[1]),
			xy_t(x[2], y[2]) - xy_t(x[3], y[3])
		};

		bool p = abs(cross_product(a[0], a[1])) < eps;
		cout << (p ? "YES" : "NO") << endl;
	}
	
	
    return 0;
}