#include <iostream>
using namespace std;

int main() {
	int a[4];
	int b[4];
	bool flag[4];
	while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
		int hitNumber = 0;
		int blowNumber = 0;
		for(int i = 0; i < 4; i++) flag[i] = false;
		for(int i = 0; i < 4; i++) {
			if(a[i] == b[i]) {
				hitNumber++;
				flag[i] = true;
			}
		}
		for(int i = 0; i < 4; i++) {
			if(flag[i] == true) continue;
			else {
				for(int j = 0; j < 4; j++) {
					if(a[i] == b[j]) {
						blowNumber++;
					}
				}
			}
		}
		cout << hitNumber << " " << blowNumber << endl;
	}
	return 0;
}