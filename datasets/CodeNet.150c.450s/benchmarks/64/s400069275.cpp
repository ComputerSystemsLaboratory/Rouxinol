#include<iostream>

using namespace std;

int size_a, A[2000];

bool check(int num, int elem) {
	if (elem == 0) return true;
	if (num >= size_a) return false;
	bool res = check(num + 1, elem) || check(num + 1, elem - A[num]);
	return res;
}

int main() {
	int rep, elem;
	cin >> size_a;
	for (int i = 0; i < size_a; ++i) {
		cin >> A[i];
	}
	cin >> rep;
	for (int i = 0; i < rep; ++i) {
		cin >> elem;
		if (check(0, elem)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}