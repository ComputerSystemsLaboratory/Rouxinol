#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int n;
	double x1, y1;
	double x2, y2;
	double x3, y3;
	double x4, y4;

	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		double xa = x2 - x1, ya = y2 - y1;
		double xc = x4 - x3, yc = y4 - y3;
		double cp = xa*yc - xc*ya;
		if(abs(cp) < 0.0000000001) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}