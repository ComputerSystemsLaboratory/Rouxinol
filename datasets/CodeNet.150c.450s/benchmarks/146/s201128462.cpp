#include <iostream>
#include <complex>
#include <cmath>
#include <cstdio>
using namespace std;
typedef complex<double> xy_t;
xy_t P[110];
const double eps = 1e-11;

double cross_product(xy_t a , xy_t b){
	return (conj(a)*b).imag();
}


int main(){
	int i,t,n;
	double x,y,area;
	scanf("%d\n",&n);
	for(t=0;t<n;t++){
		for(i=0;i<4;i++){
			scanf("%lf %lf\n",&x,&y);
			P[i]= xy_t(x,y);
		}
		area = cross_product(P[1]-P[0],P[3]-P[2])/2;;
		bool p = abs(area)<eps;
		cout << (p ? "YES" : "NO") << endl;
	}

	return 0;
}