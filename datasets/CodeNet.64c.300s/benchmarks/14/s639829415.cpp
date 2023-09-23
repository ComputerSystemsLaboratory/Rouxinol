#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	(a < b) ? cout << "a < b" << endl : (a > b) ? cout << "a > b" << endl : cout << "a == b" << endl;

	return 0;
}