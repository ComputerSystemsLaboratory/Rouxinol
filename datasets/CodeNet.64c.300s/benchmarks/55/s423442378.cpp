#include <cstdio>
#include <iostream>
using namespace std;

int main(void) {

	for (int n, i = 1; ; i++) {
		cin >> n;

		if (n == 0)  break;
		cout << "Case" << " " << i << ": "<< n << endl;

	}
	return 0;
}