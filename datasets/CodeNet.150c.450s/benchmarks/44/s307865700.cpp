#include <iostream>
using namespace std;

int main(void) {
	int a[4], b[4], e = 0, f = 0;
	while(cin >> a[0] >> a[1] >> a[2] >> a[3]){
		e = 0;
		f = 0;
		cin >> b[0] >> b[1] >> b[2] >> b[3];
		for (int i = 0; i < 4; i++) {
			if (a[i] == b[i]) e++;
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (i != j) {
					if (a[i] == b[j]) {
						f++;
					}
				}
			}
		}
		cout << e << " " << f << endl;
	}
	return 0;
}