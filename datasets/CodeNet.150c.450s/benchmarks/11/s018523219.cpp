// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long llong;
using namespace std;



int main() {
	int S[20];
	int H[20];
	int C[20];
	int D[20];

	int ipt_n;
	char ipt_c;
	int n;
	for (int i = 0; i < 20; i++) {
		S[i] = 0;
		H[i] = 0;
		C[i] = 0;
		D[i] = 0;
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ipt_c >> ipt_n;
		if (ipt_c == 'S')S[ipt_n] = 1;
		if (ipt_c == 'H')H[ipt_n] = 1;
		if (ipt_c == 'C')C[ipt_n] = 1;
		if (ipt_c == 'D')D[ipt_n] = 1;
	}

	for (int i = 1; i <= 13; i++) {
		if (S[i] == 0)cout << "S " << i << endl;
	}
	for (int i = 1; i <= 13; i++) {
		if (H[i] == 0)cout << "H " << i << endl;
	}
	for (int i = 1; i <= 13; i++) {
		if (C[i] == 0)cout << "C " << i << endl;
	}
	for (int i = 1; i <= 13; i++) {
		if (D[i] == 0)cout << "D " << i << endl;
	}

	return 0;
}

