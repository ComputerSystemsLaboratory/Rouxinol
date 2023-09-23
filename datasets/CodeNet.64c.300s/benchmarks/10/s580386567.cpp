#include<iostream>
using namespace std;
int main() {
	int x,y;
	for (;;) {
		cin >> x >> y;
		if (x < 1 && y < 1) {
			return 0;
		}
		if (x > y) {
			cout << y <<" "<< x << endl;
		}
		else if (x <= y) {
			cout << x <<" "<< y << endl;
		}
	}
}
