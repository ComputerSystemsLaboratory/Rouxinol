#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	if ((a < b && a < c) && (b < c)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}
