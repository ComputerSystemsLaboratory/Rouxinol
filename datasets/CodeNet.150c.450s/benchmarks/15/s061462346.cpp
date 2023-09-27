#include<iostream>
using namespace std;

bool linearSearch(int S[], int numS, int key) {
	int i = 0;
	S[numS] = key;
	while (S[i] != key) i++;

	if (i == numS) return false;
	return true;
}

int main() {
	int numS, numT;
	int S[100000+1];
	int key;
	int num = 0;

	cin >> numS;
	for (int i = 0; i < numS; i++) {
		cin >> S[i];
	}
	cin >> numT;
	for (int i = 0; i < numT; i++) {
		cin >> key;
		if (linearSearch(S, numS, key)) num++;
	}

	cout << num << endl;

	return 0;
}