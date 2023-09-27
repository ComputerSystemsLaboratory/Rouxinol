#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
int main() {
	int n;
	bool start = true;
	cin >> n;
	cout << n << ": ";
	while (n != 1) {
		if (n % 2 == 0) {
			if (start) {
				cout << 2;
				start = false;
			}
			else cout << " " << 2;
			n /= 2;
		}
		else {
			bool judge = true;
			for (int i = 2; i <= sqrt(n); i++) {
				if (n%i == 0) {
					judge = false;
					if (start) {
						cout << i;
						start = false;
					}
					else cout << " " << i;
					n /= i;
					break;
				}
			}
			if (judge) {
				if(start)cout << n ;
				else cout << " " << n;
				n = 1;
			}
		}
		
	}
	cout << endl;

	return 0;
}