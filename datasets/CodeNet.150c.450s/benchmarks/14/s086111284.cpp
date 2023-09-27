#include <iostream>
using namespace std;

void call(int n);
void judge1(int a);
void judge2(int b);
void judge3(int c);

int main() {
	int input;
	cin>>input;
	call(input);
	return 0;
}

void call(int n) {
	int i;
	for (i = 1; i <= n; i++) {
		judge1(i);
	}
	cout << endl;
}

void judge1(int a) {
	if (a % 3 == 0) cout << " " << a;
	else judge2(a);
}

void judge2(int b) {
	if (b % 10 == 3) cout << " " << b;
	else judge3(b);
}

void judge3(int c) {
	int temp = 0;
	while (1) {
		if (temp == 0) temp = c;
		temp /= 10;
		if (temp) {
			if (temp % 10 == 3) {
				cout << " " << c;
				break;
			}
		}
		else break;
	}
}