#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;

int main() {
	int d;
	while (cin >> d) {
		int s = 0;
		for (int i = 1; i <= 600 / d - 1; i++) {
			s += pow(i*d, 2)*d;
		}
		cout << s << endl;
	}
	return 0;
}