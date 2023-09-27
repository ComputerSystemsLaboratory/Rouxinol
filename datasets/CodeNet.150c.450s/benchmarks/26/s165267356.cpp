#include <iostream>
using namespace std;
int main(void) {
	// input integer
	int a, b;
	string result;
	cin >> a >> b;
	// judge small learge or equal
	if (a > b) result = "a > b\n";
	else if (a < b) result = "a < b\n";
	else result = "a == b\n";
	// output
	cout << result;
	return 0;
}
	