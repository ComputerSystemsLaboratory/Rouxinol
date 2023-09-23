#include <iostream>
using namespace std;

int main() {
	int count = 1;
	while (true) {
		int n;
		cin >> n;
		if (n == 0) {
			break;
		}
		cout << "Case " << count << ": " << n << endl;
		count++;
	}
}
