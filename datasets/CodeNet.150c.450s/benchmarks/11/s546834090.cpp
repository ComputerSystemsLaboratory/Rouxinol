#include<iostream>
using namespace std;
int main() {
	int N, d, s[66] = { 0 };
	char C;
	cin >> N;
	while(N--){
		cin >> C >> d;
		if (C == 'S')s[d] = 1;
		if (C == 'H')s[d+13] = 1;
		if (C == 'C')s[d+26] = 1;
		if (C == 'D')s[d+39] = 1;
	}
	for (int i = 1; i <= 52; i++) {
		if (s[i]==0) {
			if (i < 14)cout << "S " << i << endl;
			else if (i < 27)cout << "H " << i-13 << endl;
			else if (i < 40)cout << "C " << i-26 << endl;
			else cout << "D " << i-39 << endl;
		}
	}	return 0;
}