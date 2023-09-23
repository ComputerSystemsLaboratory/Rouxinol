// Integral

#include <iostream>
using namespace std;

int main() {
	int d;
	while(cin >> d) {
		int x = 0;
		long long S = 0;
		for(int i = 1; i < 600/d; i++) {
			x += d;
			S += d * (x * x);
		}
		cout << S << endl;
	}
	return 0;
}