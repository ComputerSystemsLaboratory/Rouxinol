#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int d;
	while (cin >> d) {
		int s = 0;
		for (int i = d; i <= (600 - d); i+=d) {
			s += pow(i, 2)*d;
		}
		cout << s << endl;
	}
}
