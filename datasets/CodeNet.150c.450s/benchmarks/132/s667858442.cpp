#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n, p;
	while (cin >> n >> p, n || p) {
		int mayor[n];
		fill(mayor, mayor + n, 0);
		int stone = p;
		for (int i = 0;; i = (i + 1) % n) {
			if (stone) {
				stone--;
				mayor[i]++;
				if (mayor[i] == p) {
					cout << i << endl;
					break;
				}
			}
			else {
				stone = mayor[i];
				mayor[i] = 0;
			}
		}
	}
	return 0;
}