#include <iostream>
#include <stdio.h>
using namespace std;

void swap(long long int *a, long long int*b) {
	long long int x;
	x = *a;
	*a = *b;
	*b = x;
}

int GetGCD(long long int a, long long int b) {
	if (b > a) { swap(&a, &b); }
	while (a%b != 0) {
		a = a%b;
		swap(&a, &b);
	}
	return b;
}

int main() {
	long long int a, b, GCD, LCM;
	while (cin >> a>> b) {
		GCD = GetGCD(a, b);
		LCM = a*b / GCD;
		cout << GCD << " " << LCM << endl;
	}
}