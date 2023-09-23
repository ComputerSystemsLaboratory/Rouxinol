#include <cmath>
#include <iostream>
using namespace std;

int main () {
	int e;
	while (cin >> e, e) {
		int result = 0x7ffffff;
		for (int z = 0; z * z * z <= e; z++) {
			int y = sqrt(e - z * z * z);
			int x = e - z * z * z - y * y;
			result = min(x + y + z, result);
		}
		cout << result << endl;
	}
	return 0;
}