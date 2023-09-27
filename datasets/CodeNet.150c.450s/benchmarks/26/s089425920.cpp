#include<iostream>

#define CI cin <<
#define CO cout <<
#define E << endl;

using namespace std;

int main(void) {
	int a = 0, b = 0;

	cin >> a >> b;
	
	if (a < b) {
		cout << "a < b" << endl;
	}
	if (a > b) {
		cout << "a > b" << endl;
	}
	if (a == b) {
		CO "a == b" E
	}
}