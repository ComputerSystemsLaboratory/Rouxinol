#include <iostream>
using namespace std;

int main() {
	int n[100000], s, i;
	n[0] = 1;
	n[1] = 1;

	cin >> s;

	for (i = 2; i <=s; i++) {
		n[i] = n[i-1] + n[i-2];
	}

	cout << n[s] << endl;

	return 0;
}