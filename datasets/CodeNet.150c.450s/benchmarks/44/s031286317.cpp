#include <iostream>
using namespace std;
int main() {
	int a[4];
	int b[4];

	while(cin >> a[0] >> a[1] >> a[2] >> a[3]) {
		cin >> b[0] >> b[1] >> b[2] >> b[3];
		int hit = 0, brow = 0;
		for(int i = 0; i < 4; i++) {
			if(a[i] == b[i]) {
				hit++;
			}
		}
		for(int i = 0; i < 4; i++) {
			if(a[i] == b[(i + 1) % 4]) {
				brow++;
			}
			if(a[i] == b[(i + 2) % 4]) {
				brow++;
			}
			if(a[i] == b[(i + 3) % 4]) {
				brow++;
			}
		}
		cout << hit << " " << brow << endl;
	}

	return 0;
}