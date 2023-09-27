#include<iostream>
using namespace std;

int main() {
	int a, b, x = 1, count = 0;
	while (cin >> a >> b, !cin.eof()){
		x = 1;
		count = 0;
		while (a + b>=x) {
			x *= 10;
			count++;
		}
		cout << count << endl;
	}
}