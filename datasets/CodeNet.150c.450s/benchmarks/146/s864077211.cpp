#include <iostream>
#include <cmath>
using namespace std;
#define rep(i,x) for(int i = 0; i < (x); ++(i))
int main() {
	int n;
	cin >> n;
	while(n--) {
		double x[4], y[4];
		double EPS = 1e-10;
		rep(i,4) {
			cin >> x[i] >> y[i];
		}
		if(abs((x[1] - x[0]) * (y[3] - y[2]) - (x[3] - x[2]) * (y[1] - y[0])) > EPS) {
			cout << "NO" << endl;
		} else cout << "YES" << endl;
	}
	return 0;
}