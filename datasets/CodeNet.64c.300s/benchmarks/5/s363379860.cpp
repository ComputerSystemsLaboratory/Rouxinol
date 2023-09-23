#include<algorithm>
#include <iostream>
using namespace std;

int main() {
	int h, s, t, a;
	h = 0;
	s = 0;
	t = 0;
	for (int i = 1; i <= 10; i++) {
		cin >> a;
		if (h < a) {
			swap(a,h);
		}
		if (s < a) {

			swap(s,a);

		}
		if (t < a) {

			swap(t,a);

		}
	}
	cout << h << endl;
	cout << s << endl;
	cout << t << endl;
	return 0;
}