#include <iostream>

int a[4], b[4], s = 0,t=0;
using namespace std;

int main() {
	for (int i = 0;i < 4;i++) {
		cin >> a[i];
		s += a[i];
	}
	for (int j = 0;j < 4;j++) {
		cin >> b[j];
		t += b[j];
	}
	if (s >= t) cout << s << endl;
	else cout << t << endl;
	cin >> s;
}
