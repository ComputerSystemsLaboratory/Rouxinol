#include <iostream>
using namespace std;

int main(void) {
	int x, y;
	cin >> x >> y;
	int area = x * y;
	int perimeter = 2 * (x + y);
	cout << area << " " << perimeter << endl;
	return 0;
}
