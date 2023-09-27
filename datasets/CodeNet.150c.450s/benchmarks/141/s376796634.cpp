#include<iostream>
#include<math.h>
using namespace std;
int main() {
	double x1, y1, x2, y2, x3, y3, xp, yp, a, b, c, d, e, f, s1, s2, s3,s4, S1, S2, S3,S4;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
		a = pow((pow(x1 - xp, 2) + pow(y1 - yp, 2)), 1.0 / 2);
		b = pow((pow(x2 - xp, 2) + pow(y2 - yp, 2)), 1.0 / 2);
		c = pow((pow(x3 - xp, 2) + pow(y3 - yp, 2)), 1.0 / 2);
		d = pow((pow(x2 - x3, 2) + pow(y2 - y3, 2)), 1.0 / 2);
		e = pow((pow(x1 - x3, 2) + pow(y1 - y3, 2)), 1.0 / 2);
		f = pow((pow(x1 - x2, 2) + pow(y1 - y2, 2)), 1.0 / 2);
		s1 = (b + c + d) / 2;
		s2 = (a + c + e) / 2;
		s3 = (a + b + f) / 2;
		s4 = (d + e + f) / 2;
		S1 = pow(s1*(s1 - b)*(s1 - c)*(s1 - d), 1.0 / 2);
		S2 = pow(s2*(s2 - a)*(s2 - c)*(s2 - e), 1.0 / 2);
		S3 = pow(s3*(s3 - a)*(s3 - b)*(s3 - f), 1.0 / 2);
		S4 = pow(s4*(s4 - d)*(s4 - e)*(s4 - f), 1.0 / 2);
		if ((S4+0.001>S1+S2+S3)&&(S1 + S2 + S3 > S4-0.001)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}