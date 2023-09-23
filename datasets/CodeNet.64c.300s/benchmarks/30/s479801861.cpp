#include<iostream>
using namespace std;
int main() {
	int pay[6] = { 500,100,50,10,5,1 };
	while (true) {
		int a = 0, b = 0;
		cin >> a;
		if (a == 0) break;
		a = 1000 - a;
		for (int i = 0; i < 6; ++i) {
			b = b + a / pay[i];
			a = a%pay[i];
		}
		cout << b << endl;
	}
	return 0;
}