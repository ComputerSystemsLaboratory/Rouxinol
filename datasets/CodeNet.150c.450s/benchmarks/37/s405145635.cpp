#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
	double a, b, c, d, e, f, x, y;

	while(1){
		cin >> a >> b >> c >> d >> e >> f;

		if(cin.eof()){
			break;
		}

		x = ((b * f) - (e * c)) / ((b * d) - (a * e));
		y = ((a * f) - (d * c)) / ((a * e) - (d * b));

		if(x == 0){
			x = 0;
		}
		if(y == 0){
			y = 0;
		}

		cout << fixed << setprecision(3) << x << " ";
		cout << fixed << setprecision(3) << y << endl;
	}

	return 0;
}