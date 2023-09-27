#include<iostream>
using namespace std;
int main() {
	int n,i;
	float x1, y1, x2, y2, x3, y3, x4, y4,a,b;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		if (x1 - x2 == 0 && x3 - x4 == 0) {
			cout << "YES" << endl;
		}
		else if (x1 - x2 == 0 || x3 - x4 == 0) {
			cout << "NO" << endl;
		}
		else {
			a = (x3 - x4)*(y1 - y2);
			b = (x1 - x2)*(y3 - y4);
			if (a == b) {
				cout << "YES" << endl;
			}
			else if (a != b) {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}