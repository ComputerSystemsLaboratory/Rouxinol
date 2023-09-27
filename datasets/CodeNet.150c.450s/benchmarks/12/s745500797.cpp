#include<iostream>
using namespace std;
#define MAX 250

int parent(int key) {
	return key / 2;
}

int right(int key) {
	return (key * 2) + 1;
}

int left(int key) {
	return key * 2;
}

int main() {
	int s, T[MAX];
	cin >> s;
	for (int i = 1; i <= s; i++) {
		cin >> T[i];
	}
	for (int i = 1; i <= s; i++) {
		cout << "node " << i << ": key = " << T[i] << ", ";
		if (parent(i) >= 1) cout << "parent key = " << T[parent(i)] << ", ";
		if (left(i) <= s) cout << "left key = " << T[left(i)] << ", ";
		if (right(i) <= s) cout << "right key = " << T[right(i)] << ", ";
		cout << endl;
	}
}