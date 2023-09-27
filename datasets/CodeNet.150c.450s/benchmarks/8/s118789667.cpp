#include <iostream>
#include <string>
using namespace std;

int main() {

	int n, t = 0, h = 0;
	cin >> n;
	string ts, hs;
	
	for (int i = 0; i < n; i++) {
		cin >> ts >> hs;
		if (ts > hs) {
			t += 3;
		} else if (ts < hs) {
			h += 3;
		} else if (ts == hs) {
			t++; h++;
		}
	}
	cout << t << ' ' << h << '\n';
	
	return 0;
}
