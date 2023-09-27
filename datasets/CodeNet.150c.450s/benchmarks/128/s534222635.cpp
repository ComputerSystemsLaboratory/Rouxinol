#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	cin >> a;
	for (int i = a.size() - 1; i >= 0; i--) {
		cout << a[i] << flush;
	}
	cout << endl;
	return 0;
}