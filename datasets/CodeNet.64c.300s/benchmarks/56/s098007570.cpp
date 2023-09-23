#include <iostream>
using namespace std;

int days(int Y, int M, int D) {
	int res = 0;
	for(int i = 1; i < Y; i++) {
		if(i % 3)
			res += 20 * 5 + 19 * 5;
		else
			res += 20 * 10;
	}
	for(int i = 1; i < M; i++) {
		if(Y % 3) {
			if(i % 2)
				res += 20;
			else
				res += 19;
		}
		else
			res += 20;
	}
	res += D;
	return res;
}

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int y, m, d;
		cin >> y >> m >> d;
		cout << (days(1000,1,1) - days(y,m,d)) << endl;
	}
}