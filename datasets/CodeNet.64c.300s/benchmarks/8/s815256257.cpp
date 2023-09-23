#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i=1; i<=n; i=i+1) {
		int x = i;
		if (x % 3 == 0) {
			cout << " " << i;
	 	} else {
			while (x % 10 != 3 && x > 0) {
				x = x / 10;
			}
			if (x % 10 == 3)
				cout << " " << i;
		}
	}
	cout << endl;

	return 0;
}
