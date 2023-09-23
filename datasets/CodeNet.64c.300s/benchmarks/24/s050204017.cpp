
#include <iostream>
using namespace std;

int main(void) {
	int a = 0, b = 0;
	int count = 0;
	cin >> count;
	while ( count != 0) {
		int sumA = 0, sumB = 0;
		for (int i = 0; i < count; i++) {
			cin >> a >> b;
			if (a > b) sumA += a + b;
			else if (a < b) sumB += a + b;
			else {
				sumA += a;
				sumB += b;
			}
		}
		cout << sumA << " " << sumB << endl;
		cin >> count;
	}
	return 0;
}