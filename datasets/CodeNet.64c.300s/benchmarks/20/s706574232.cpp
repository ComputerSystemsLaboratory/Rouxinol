#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	unsigned long long int s=0;
	int d;
	while (cin >> d) {
		s = 0;
		for (int i = d; i <= 600 - d; i += d) {
			s += i*i*d;
		}
		cout << s << endl;
	}
	return 0;
}
