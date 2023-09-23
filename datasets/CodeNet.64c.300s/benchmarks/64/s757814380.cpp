#include<iostream>
using namespace std;
int main() {
	int a, b;
		cin >> a >> b;
		int time = 0;
		if (a < b)++time;
	while (a != 0 && b != 0) {
		if (time%2 == 0) {
			a %= b;
		}
		else {
			b %= a;
		}
		++time;
	}
	cout << a + b << endl;
	return 0;
}