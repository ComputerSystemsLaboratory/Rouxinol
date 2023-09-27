#include <iostream>
using namespace std;

int main() {
	int count = 0;
	int n;
	cin >> n;
	while (n != 0) {
		cout << "Case " << ++count << ": " << n << endl;
		cin >> n;
	}

	return 0;
}