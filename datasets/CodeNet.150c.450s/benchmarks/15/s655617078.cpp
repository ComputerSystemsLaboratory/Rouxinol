#include<iostream>
using namespace std;

int LinearSearch(int numT, int numS, const int S[], const int T[]) {
	int num = 0;
	for (int t = 0; t < numT; t++) {
		for (int s = 0; s < numS; s++) {
			if (S[s] == T[t]) {
				num++;
				break;
			}
		}
	}
	return num;
}

int main() {
	int numS, numT;
	int S[10000], T[500];

	cin >> numS;
	for (int i = 0; i < numS; i++) {
		cin >> S[i];
	}
	cin >> numT;
	for (int i = 0; i < numT; i++) {
		cin >> T[i];
	}

	int num = LinearSearch(numT, numS, S, T);

	cout << num << endl;

	return 0;
}