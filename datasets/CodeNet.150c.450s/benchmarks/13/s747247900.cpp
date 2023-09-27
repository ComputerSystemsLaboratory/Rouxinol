#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main(void) {
	string a, b;
	cin >> a >> b;
	a += a;
	if (a.find(b) != string::npos) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}