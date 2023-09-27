#include <iostream>
#include <string>
using namespace std;

int main() {
	int x = 0, y = 0, z = 0;
	char a[10];
	while (1) {
		cin >> x >> a >> y;
		if (a[0] == '+') { 
			z = x + y;
		}else if (a[0] == '-') {
			z = x - y;
		}else if (a[0] == '*') {
			z = x * y;
		}else if (a[0] == '/') {
			z = x / y;
		}else if (a[0] == '?') {
			break;
		}
		cout << z << endl;
	}
	return 0;
}