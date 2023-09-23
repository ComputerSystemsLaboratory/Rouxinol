#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int a, b;
	cin >> a >> b;

	int area = a * b;
	int rectangle = 2 * (a + b);

	cout << area << ' ' << rectangle << endl;

	return 0;
}
