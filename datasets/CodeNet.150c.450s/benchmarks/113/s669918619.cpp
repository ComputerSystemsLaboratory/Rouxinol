#include <iostream>

using namespace std;

int main() {

	for (int i = 0; true; i++) {
		int x;
		cin >> x;
		if (!x)
			return 0;
		cout << "Case " << i + 1 << ": " << x << endl;
	}

	return 0;

}