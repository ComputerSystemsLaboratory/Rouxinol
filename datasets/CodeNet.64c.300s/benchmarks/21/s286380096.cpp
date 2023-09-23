#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;

int main() {
	double a, b, c, d, e, f,A,B,D,E;
	while (cin >> a >> b >> c >> d >> e >> f) {
		A = e / (a*e - b*d);
		B = -b / (a*e - b*d);
		D = -d / (a*e - b*d);
		E = a / (a*e - b*d); 
		a = A*c + B*f;
		a *= 1000;
		if(a>=0)a += 0.5;
		else a -= 0.5;
		a = int(a);
		a /= 1000;
		b = D*c + E*f;
		b *= 1000;
		if (b >= 0)b += 0.5;
		else b -= 0.5;
		b = int(b);
		b /= 1000;
		cout << fixed << setprecision(3) << a << " " << b << endl;
	}
	return 0;
}