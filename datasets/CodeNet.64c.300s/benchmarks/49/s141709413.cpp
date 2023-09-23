#include <iostream>
using namespace std;

int number_of_digits(int n) {
	int result = 0;
	while (n != 0) {
		result++;
		n /= 10;
	}
	return result;
}

int main() {
	int a, b;
	
	while (cin >> a >> b)
		cout << number_of_digits(a+b)
		     << endl;
	return 0;
}