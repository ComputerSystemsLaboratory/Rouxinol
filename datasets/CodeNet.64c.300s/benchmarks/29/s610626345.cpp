#include <iostream>
#include<math.h>
using namespace std;
int main() {
	 int e;
	cin >> e;

	while (e!=0) {
		int min = e;
		for (int z = 0; z <= 100; z++) {
			for (int y = 0; y <= 1000; y++) {
				int z2 = z * z,y2=y*y;
				int z3 = z2 * z;
				int x = e - y2 - z3;
				if (x < 0)break;
				int a = x + y + z;
				if (a < min)min = a;
			}
		}
		cout << min << endl;
		cin >> e;
	}
}
