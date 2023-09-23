#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	if (num1 < num2) {
		if (num2 < num3) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}
	else {
		cout << "No\n";
	}




	return 0;
}