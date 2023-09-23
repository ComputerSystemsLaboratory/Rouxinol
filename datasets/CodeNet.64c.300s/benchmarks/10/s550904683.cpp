#include<iostream>
#include<string>
using namespace std;
int main() {
	int a, b,c,d;
	while (true) {
		cin >> a >> b;
		c = b;
		d = a;
		if (a > b) {
			a = c;
			b = d;
		}
		if (a == 0 && b == 0) {
			break;
		}
		cout << a <<" "<< b << endl;
	}
}
