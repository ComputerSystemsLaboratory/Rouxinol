#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int one, two, three, four, five, six,up,suu,copy;
	char mozi[100];
	cin >> one >> two >> three >> four >> five >> six;
	cin >> mozi;
	suu = strlen(mozi);
	up = one;
	for (int i = 0; i < suu; i++) {
		switch (mozi[i]) {
		case 'E':copy=one;
			one = four;
			four = six;
			six = three;
			three = copy;
			break;
		case 'N':copy=five;
			five = one;
			one = two;
			two = six;
			six = copy;
			break;
		case 'S':copy=two;
			two = one;
			one = five;
			five = six;
			six = copy;
			break;
		case 'W':copy=four;
			four = one;
			one = three;
			three = six;
			six = copy;
		}
		up = one;
	}
	cout << up << endl;
	return 0;
}
