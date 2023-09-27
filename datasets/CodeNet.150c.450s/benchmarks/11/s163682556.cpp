
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#define pi 3.14159265358979323846264338
using namespace std;

int main() {
	bool S[14] = {}, D[14] = {}, H[14] = {}, C[14] = {};
	string card;
	int num;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> card >> num;
		if (card == "S") {
			S[num] = true;
		}
		if (card == "D") {
			D[num] = true;
		}
		if (card == "H") {
			H[num] = true;
		}
		if (card == "C") {
			C[num] = true;
		}
	}
	for (int i = 1; i < 14; i++) {
		if (S[i] == false) {
			cout << "S " << i << endl;
		}
	}
	for (int i = 1; i < 14; i++) {
		if (H[i] == false) {
			cout << "H " << i << endl;
		}
	}
	for (int i = 1; i < 14; i++) {
		if (C[i] == false) {
			cout << "C " << i << endl;
		}
	}
	for (int i = 1; i < 14; i++) {
		if (D[i] == false) {
			cout << "D " << i << endl;
		}
	}
	return 0;
}