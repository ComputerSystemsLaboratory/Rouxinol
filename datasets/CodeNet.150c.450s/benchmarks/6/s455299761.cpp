#include <iostream>
using namespace std;
int main(void) {
	// input integer
	int a, b, c;
	cin >> a >> b >> c;
	// judge small leage
	string result = "Yes";
	if (a >= b || b >= c) {
		result = "No";
	}
	// output
	cout << result << endl;
	return 0;
}