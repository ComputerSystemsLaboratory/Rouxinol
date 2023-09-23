#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main(void) {
	int a, b;
	while(cin >> a >> b, a|b) {
		if(a > b) {
			swap(a, b);
		}
		cout << a << " " << b << endl;
	}
	return 0;
}