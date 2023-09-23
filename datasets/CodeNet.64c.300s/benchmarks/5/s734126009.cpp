#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cctype>
#include<vector>
#include<queue>
#include<map>
using namespace std;

int main() {
	int a, b1 = 0, b2 = 0, b3 = 0;

	for (int i = 0; i < 10; i++) {
		cin >> a;
		if (a > b1) {
			b3 = b2;
			b2 = b1;
			b1 = a;
		}
		else if (a > b2) {
			b3 = b2;
			b2 = a;
		}
		else if (a > b3) {
			b3 = a;
		}
	}

	cout << b1 << endl << b2 << endl << b3 << endl;

	return 0;
}