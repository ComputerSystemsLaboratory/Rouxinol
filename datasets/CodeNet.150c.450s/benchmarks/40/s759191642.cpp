#include <string>
#include <iostream>
using namespace std;
int a[6], t; string s;
int main() {
	for(int i = 0; i < 6; i++) cin >> a[i];
	cin >> s;
	for(int i = 0; i < s.size(); i++) {
		t = a[0];
		switch(s[i]) {
		case 'N':
			a[0] = a[1];
			a[1] = a[5];
			a[5] = a[4];
			a[4] = t;
			break;
		case 'E':
			a[0] = a[3];
			a[3] = a[5];
			a[5] = a[2];
			a[2] = t;
			break;
		case 'S':
			a[0] = a[4];
			a[4] = a[5];
			a[5] = a[1];
			a[1] = t;
			break;
		case 'W':
			a[0] = a[2];
			a[2] = a[5];
			a[5] = a[3];
			a[3] = t;
			break;
		}
	}
	cout << a[0] << endl;
	return 0;
}