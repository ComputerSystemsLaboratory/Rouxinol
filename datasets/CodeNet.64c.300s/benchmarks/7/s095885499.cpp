#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char a;
	int b, n;
	int S[13] = {0};
	int H[13] = {0};
	int C[13] = {0};
	int D[13] = {0};

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a == 'S') S[b - 1] = 1;
		if (a == 'H') H[b - 1] = 1;
		if (a == 'C') C[b - 1] = 1;
		if (a == 'D') D[b - 1] = 1;
	}

	for (int i = 0; i < 13; i++) {
		if (S[i] == 0)  cout << "S " << i + 1 << endl;
	}
	for (int i = 0; i < 13; i++) {
		if (H[i] == 0)  cout << "H " << i + 1 << endl;
	}
	for (int i = 0; i < 13; i++) {
		if (C[i] == 0)  cout << "C " << i + 1 << endl;
	}
	for (int i = 0; i < 13; i++) {
		if (D[i] == 0)  cout << "D " << i + 1 << endl;
	}
	

	return (0);
}