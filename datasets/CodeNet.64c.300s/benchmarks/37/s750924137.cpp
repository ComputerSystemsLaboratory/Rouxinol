#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int a;
	while (cin >> a, a) {
		int sum = 0;
		for (int b = 2; b < 1000; b += 2) {
			if (a%b == b/2) {
				if (a / b - b / 2 >= 0)sum++;
			}
		}
		for (int c = 3; c < 1000; c+=2) {
			if (a%c == 0) {
				if (a / c - c / 2 >= 1)sum++;
			}
		}
		cout << sum << endl;
	}
}