#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	double a, b, c, d, e, f;
	while(cin >> a >> b >> c >> d >> e >> f){
		//double x = (c * e - f * b) / (a * e - d * b);
		double y = (c * d - f * a) / (b * d - a * e);
		double x = (- b * y + c) / a;
		
		cout << fixed << setprecision(3) << x << " " << y << endl;
	}
	
	return 0;
}