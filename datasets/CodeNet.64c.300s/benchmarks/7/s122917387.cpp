#include<iostream>
using namespace std;

int main() {
	bool s[13] = { false };
	bool h[13] = { false };
	bool c[13] = { false };
	bool d[13] = { false };
	int n;
	char l;
	int a;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> l >> a;
		if (l == 'S'){
			s[a-1] = true;
		}else if (l=='H'){
			h[a-1] = true;
		}else if (l=='C'){
			c[a-1] = true;
		}else if (l=='D'){
			d[a-1] = true;
		}
	}
	for (int i = 0; i < 13; i++){
		if (s[i] == false) {
			cout << "S " << i+1 << endl;
		}
	}
	for (int i = 0; i < 13; i++) {
		if (h[i] == false) {
			cout << "H " << i+1 << endl;
		}
	}
	for (int i = 0; i < 13; i++) {
		if (c[i] == false) {
			cout << "C " << i+1 << endl;
		}
	}
	for (int i = 0; i < 13; i++) {
		if (d[i] == false) {
			cout << "D " << i+1 << endl;
		}
	}
	cin >> l;
}