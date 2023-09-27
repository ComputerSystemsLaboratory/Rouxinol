#include <iostream>
#include <cmath>
#include <complex>
using namespace std;
typedef complex<double> P;
double cp(P a, P b){
	return (conj(a)*b).imag();
}
int main(){
	P p[4];
	double x,y;
	while(cin >> x){
		cin >> y;
		p[0] = P(x,y);
		for(int i = 1; i < 4; ++i){
			cin >> x >> y;
			p[i] = P(x,y);
		}
		for(int i = 0 ;i < 3; ++i) p[i] -= p[3];
		if(cp(p[0],p[1])*cp(p[1],p[2]) > 0 && cp(p[0],p[1])*cp(p[2],p[0]) > 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}