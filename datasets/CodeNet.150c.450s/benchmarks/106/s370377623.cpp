#include <iostream>
using namespace std;
int main() {
	int a, b, c, z;
	z = 0;
	cin >> a >> b >> c;
	for (int i = a; i <= b; i++) {
		if (c % i == 0) {
			z++;
		}
	}
	cout << z << endl;
	
	return 0;
}
