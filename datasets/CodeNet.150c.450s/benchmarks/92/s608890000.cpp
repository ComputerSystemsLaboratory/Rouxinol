#include<iostream>
#include<cstdio>
using namespace std;

int main() {

	int a, b, c;
	char e[100];

	while (cin >> a >> b) {

		c = sprintf(e, "%d", a+b);

		cout << c << endl;
	}

	return 0;
}