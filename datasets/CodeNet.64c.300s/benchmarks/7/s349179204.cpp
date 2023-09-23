#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <cstdlib>

using namespace std;

int main(void) {

	int n, num;
	int S[13], H[13], C[13], D[13];
	char mark;

	for (int i = 0; i < 13; i++) {
		S[i] = 1;
		H[i] = 1;
		C[i] = 1;
		D[i] = 1;
	}

	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> mark >> num;
		if (mark == 'S')
			S[num - 1] = 0;

		else if (mark == 'H')
			H[num - 1] = 0;

		else if (mark == 'C')
			C[num - 1] = 0;

		else 
			D[num - 1] = 0;
	}

	for (int i = 0; i < 13; i++) {
		if (S[i] != 0)
			cout << "S " << i + 1 << endl;
	}

	for (int i = 0; i < 13; i++) {
		if (H[i] != 0)
			cout << "H " << i + 1 << endl;
	}

	for (int i = 0; i < 13; i++) {
		if (C[i] != 0)
			cout << "C " << i + 1 << endl;
	}

	for (int i = 0; i < 13; i++) {
		if (D[i] != 0)
			cout <<"D " << i + 1 << endl;
	}

	return 0;
}