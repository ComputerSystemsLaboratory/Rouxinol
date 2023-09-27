#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double S(double a, double b, double c, double d, double e, double f) {
	double ans;
	ans = abs((a*1000 - e*1000) * (d*1000 - f * 1000) - (b * 1000 - f * 1000) * (c * 1000 - e * 1000));
	return ans;
}

int main(){
	double x[4], y[4], s[3], SS, SSS;

	while(true){
		cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
		if (cin.eof()) { break; }
		s[0] = S(x[0], y[0], x[1], y[1], x[3], y[3]);
		s[1] = S(x[0], y[0], x[2], y[2], x[3], y[3]);
		s[2] = S(x[1], y[1], x[2], y[2], x[3], y[3]);
		if(s[0] * s[1] * s[2] == 0){ 
			cout << "NO" << endl;
			continue;
		}
		SS = s[0] + s[1] + s[2];
		SSS = S(x[0], y[0], x[1], y[1], x[2], y[2]);

		if (SS == SSS) { cout << "YES" << endl; }
		else { cout << "NO" <<  endl; }
	}
	return 0;
}