#include<iostream>
#include<algorithm>
#include<string>
#include<utility>


using namespace std;

int main() {
	int n;
	string a[100],b[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	bool flag = true;
	while (flag) {
		flag = false;
		for (int i = n-1; i > 0; i--) {
			if (a[i][1] < a[i - 1][1]) {
				swap(a[i], a[i - 1]);
				flag = true;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (i != 0)cout << " ";
		cout << a[i];
	}
	cout << endl << "Stable" << endl;
	for (int i = 0; i < n; i++) {
		int MIN = i;
		for (int j = i; j < n; j++) {
			if (b[j][1] < b[MIN][1]) {
				MIN = j;
			}
		}
		if (i != MIN) {
			swap(b[i], b[MIN]);
		}
	}
	string stb="Stable";
	for (int i = 0; i < n; i++) {
		if (i != 0)cout << " ";
		cout << b[i];
		if (a[i] != b[i])stb = "Not stable";
	}
	cout << endl << stb << endl;
	return 0;
}