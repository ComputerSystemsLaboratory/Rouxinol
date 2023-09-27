#include<iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {

	int a, b, c,d,no;
	int result[1000];

	cin >> no;
	for (int i = 0; i < no; i++) {
		cin >> a >> b >> c;

		d = a;
		if (d < b)
			d = b;
		if (d < c)
			d = c;

		if (d == a) {
			if (a*a == b*b + c*c)
					result[i] = 1;
			else result[i]= 0;
			}
		else if (d == b) {
			if (b*b == a*a + c*c)
				result[i] = 1;
			else result[i] = 0;
		}
		else {
			if (c*c == a*a + b*b)
				result[i] = 1;
			else result[i] = 0;
		}
	}


	for (int i = 0; i < no; i++) {
		if (result[i] == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;

}