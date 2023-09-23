#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if((a >= 0) && (a <= 100)) {
		if((b >= 0) && (b <= 100)) {
			if((c >= 0) && (c <= 100)) {
				if((a < b) && (b < c)) {
					cout << "Yes" << endl;
				} else {
					cout << "No" << endl;
				}
			}
		}
	}
}