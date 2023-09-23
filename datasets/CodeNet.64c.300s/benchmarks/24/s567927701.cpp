#include <iostream>
using namespace std;

int main() {
	int suma, sumb, a, b, n;
	while (1) {
		suma = sumb = 0;
		cin >> n;
		if (n == 0) break;
		
		while (n--) {
			cin >> a >> b;
			if (a > b)
				suma += a + b;
			else if (a < b)
				sumb += a + b;
			else {
				suma += a;
				sumb += b;
			}
		}
		cout << suma << ' ' << sumb << endl;
	}
	
	return 0;
}