#include <iostream>
#include <iomanip>
using namespace std;

double get_num(double x){
	x = x * 1000;
	if(x >= 0){
		x = (int)(x + 0.5);
		return ((double)x / 1000);
	} else {
		x = (int)(x - 0.5);
		return ((double)x / 1000);
	}
}

int main(){
	double a, b, c, d, e, f;
	double x, y;
	while(cin >> a >> b >> c
		>> d >> e >> f)
	{
		y = (c * d - f * a) / (b * d - e * a);
		if(a == 0){
			x = (f - e * y) / d;
		} else {
			x = (c - b * y) / a;
		}
		x = get_num(x);
		y = get_num(y);
		cout << fixed << setprecision(3) << x << " " << y << endl;
	}
	return 0;
}