#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	while(1){
		int x = i;
		if (x % 3 == 0) {
			cout << " " << i;
			if (++i <= n) {
				continue;
			}
			else {
				break;
			}
		}

		do {
			if (x % 10 == 3) {
				cout << " " << i;
				break;
			}
			x /= 10;
		} while (x);

		if (++i <= n) {
			continue;
		}
		else {
			break;
		}
	}
	cout << endl;

	return 0;
}