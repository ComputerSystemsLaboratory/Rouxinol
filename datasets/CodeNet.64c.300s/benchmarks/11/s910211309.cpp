#include <iostream>
using namespace std;
int main() {
	int S;
	cin >> S;
	int a = S % 60;
	int b = (S - a) / 60 % 60;
		int c = (S - a - b) / 3600;
		cout << c << ":" << b << ":" << a << endl;
	return 0;
}

