#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b;

	string ope;

	cin >> a >> b;

	ope = (a == b ? " == " : a > b ? " > " : " < ");

	cout << "a"<< ope << "b" << endl;
	
	return 0;
}