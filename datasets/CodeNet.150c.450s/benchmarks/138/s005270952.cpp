#include<iostream>
using namespace std;

int main() {
	int x, y;
	int l, s;
	cin >> x >> y;
	if (x > y) {
		l = x; s = y;
	}
	else {
		l = y; s = x;
	}

	while (1) {
		//cerr << l << " " << s << endl;
		int k = l % s;
		if (k == 0) {
			cout << s << endl;
			break;
		}
		l = s;
		s = k;
	}


	return 0;
}