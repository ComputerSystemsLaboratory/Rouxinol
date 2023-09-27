#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	bool num[31] = { false };
	int n;
	while (cin >> n) {
		num[n] = true;
	}
	for (int i = 1; i <= 30; ++i) {
		if (num[i] == false)
			cout << i << endl;
	}

	return 0;
}