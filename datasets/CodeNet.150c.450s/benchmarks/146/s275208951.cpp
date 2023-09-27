#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	double x1, x2, x3, x4, y1, y2, y3, y4;
	vector<double> X1, Y1, X2, Y2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		X1.push_back(x2 - x1); Y1.push_back(y2 - y1);
		X2.push_back(x4 - x3); Y2.push_back(y4 - y3);
	}
	for (int i = 0; i < n; i++) {
		double det = fabs(X1[i] * Y2[i] - X2[i] * Y1[i]);
		if (fabs(det)<1e-10)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}