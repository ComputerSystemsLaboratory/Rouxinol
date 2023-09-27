
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int count = 1000000;
	for (int i = 0; i < count; i++) {
		int e = 0;
		cin >> e;
		if (e == 0){
			return 0;
		}
		int min = e;
		for (int z = 0; z*z*z <= e; z++) {
			for (int y = 0; y*y <= e - z*z*z; y++) {
				int x = e - y*y - z*z*z;
				int m = x + y + z;
				if (m < min){
					min = m;
				}
			}
		} //
		cout << min << endl;
	} //
	return 0;
}