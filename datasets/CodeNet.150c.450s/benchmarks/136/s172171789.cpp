#include<cstdio>
#include<iostream>
#include <algorithm>

using namespace std;

int main() {
	long int  a, b;
	while (cin >> a >> b) {
		cout << __gcd(a, b) << " " << a / __gcd(a, b) * b << endl;

	}

}