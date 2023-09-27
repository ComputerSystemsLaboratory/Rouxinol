#include <iostream>

using namespace std;

int main() {

	const int num=3;
	int a, b;

	while(cin >> a >> b) {

		int sum = a + b;
		int keta = 1;
		while (1) {
			if (sum >= 10) {
				keta++;
				sum /= 10;
			}
			else {
				break;
			}
		}

		cout << keta << endl;

	}

	return 0;

}