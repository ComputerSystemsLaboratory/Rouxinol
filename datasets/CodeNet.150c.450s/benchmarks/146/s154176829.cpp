#include <iostream>

using namespace std;

void parallelism(double, double, double, double, double, double, double, double);

int main() {

	double x1, y1, x2, y2, x3, y3, x4, y4, n;

	cin >> n;

	while(n!=0) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		parallelism(x1, y1, x2, y2, x3, y3, x4, y4);
		n--;
	}

	return 0;

}

void parallelism(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {

	double x12, y12, x34, y34;

	x12=x2-x1;
	y12=y2-y1;
	x34=x3-x4;
	y34=y3-y4;

	if(x12*y34==y12*x34)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}