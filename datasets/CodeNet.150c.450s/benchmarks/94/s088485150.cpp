#include<iostream>
using namespace std;
int main() {
	int abc[100], youso;
	cin >> youso;
	for (int i = 0; i < youso; ++i) {
		cin >> abc[i];
	}
	int damy, time = 0;
	for (int i = 0; i < youso - 1; ++i) {
		for (int ii = youso - 1; ii > i; --ii) {
			if (abc[ii - 1] > abc[ii]) {
				damy = abc[ii - 1];
				abc[ii - 1] = abc[ii];
				abc[ii] = damy;
				++time;
			}
		}
	}
	for (int i = 0; i < youso-1; ++i) {
		cout << abc[i]<<" ";
	}
	cout << abc[youso - 1] << endl << time << endl;
	return 0;
}