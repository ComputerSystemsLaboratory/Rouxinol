#include <iostream>
using namespace std;

int main() {
	int d, sum;
	while (cin >> d) {
		sum = 0;
		for (int i = d;i < 600;i += d)
			sum += i * i * d;
		cout << sum << endl;
	}
}