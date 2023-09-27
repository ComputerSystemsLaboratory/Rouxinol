#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int kouka[6] = { 500,100,50,10,5,1 };
int main() {
	int a;
	while (cin >> a, a) {
		a = 1000 - a;
		int sum = 0;
		for (int b = 0; b < 6; b++) {
			sum += a / kouka[b];
			a -= a / kouka[b] * kouka[b];
		}
		cout << sum << endl;
	}
}