#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void bubbleSort(string a[], int n) {
	for (int i = 0; i < n; i++) {	/*already sorted a[0, i)*/
		for (int j = n - 1; j > i; j--) {
			if (a[j - 1][1] > a[j][1]) {
				swap(a[j - 1], a[j]);
			}
		}
	}
}

void selectionSort(string a[], int n) {
	for (int i = 0; i < n; i++) {	/*already sorted a[0, i)*/
		int minj = i;
		for (int j = i; j < n; j++) {
			if (a[j][1] < a[minj][1]) {
				minj = j;
			}
		}
		swap(a[i], a[minj]);
	}
}

void println(string s[], int n) {
	for (int i = 0; i < n; i++) {
		cout << s[i];
		if (i + 1 < n) cout << " ";
	}
	cout << endl;
}

bool _is_same(string t[], string u[], int n) {
	for (int i = 0; i < n; i++) {
		if (t[i] != u[i]) {	//i???????????????????????°?????£????????????false
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	string s[36];
	
	cin >> n;
	for (int i = 0; i < n; i++) cin >> s[i];
	
	string t[36], u[36];
	for (int i = 0; i < n; i++) t[i] = s[i];
	for (int i = 0; i < n; i++) u[i] = s[i];
	
	bubbleSort(t, n);
	selectionSort(u, n);
	
	println(t, n);
	cout << "Stable" << endl;
	
	println(u, n);
	if (_is_same(t, u, n)) { cout << "Stable" << endl; }
	else { cout << "Not stable" << endl; }
	
	return 0;
}