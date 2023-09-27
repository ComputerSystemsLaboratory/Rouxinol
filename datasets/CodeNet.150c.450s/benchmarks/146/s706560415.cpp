#include <iostream>
#include <cmath>
using namespace std;

#define EPS 1e-7

int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		if (x1 == x2 && x3 == x4){
			cout << "YES" << endl;
		}
		else if (x1 == x2 || x3 == x4){
			cout << "NO" << endl;
		}
		else if (abs((y2 - y1) / (x2 - x1) - (y4 - y3) / (x4 - x3)) < EPS){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}