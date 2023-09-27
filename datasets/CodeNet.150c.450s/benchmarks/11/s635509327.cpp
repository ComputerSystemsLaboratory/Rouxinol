#include <iostream>
using namespace std;

int main() {
	int n, x;
	char y;
	bool S[14]={false}, H[14]={false}, C[14]={false}, D[14]={false};
	
	cin >> n;

	for (int i=0; i<n; i++) {
		cin >> y >> x;
		switch (y) {
			case 'S':
				S[x] = true;
				break;
			case 'H':
				H[x] = true;
				break;
			case 'C':
				C[x] = true;
				break;
			case 'D':
				D[x] = true;
				break;				
		}
	}
	
	for (int i=1; i<=13; i++) {
		if (!S[i])
			cout << "S " << i << endl;
	}
	for (int i=1; i<=13; i++) {
		if (!H[i])
			cout << "H " << i << endl;
	}
	for (int i=1; i<=13; i++) {
		if (!C[i])
			cout << "C " << i << endl;
	}
	for (int i=1; i<=13; i++) {
		if (!D[i])
			cout << "D " << i << endl;
	}

	return 0;
}
