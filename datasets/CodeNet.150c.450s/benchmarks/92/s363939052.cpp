#include<iostream>
using namespace std;
int main() {
	int a, b;
	int i = 0;
	while (cin >> a >> b) {
	a = a + b;
		if (a != 0) {
			while (a > 0) {
				a = a / 10;
				i++;
			}
		}
		else if (a == 0) {
			i = 1;
		}
		cout << i << endl;
		i = 0;
	}
}