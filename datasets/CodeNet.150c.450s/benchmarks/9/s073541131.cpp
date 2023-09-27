#include<iostream>
#include<string>
using namespace std;
int main() {
	string a[10], b;
	int c, d;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		if (a[i] == "-") {
			for (int k = 0; k < i; k++) {
				cout << a[k] << endl;
			}
			return 0;
		}
		cin >> c;
		for (int j = 0; j < c; j++) {
			cin >> d;
			b = a[i].substr(0,d);
			a[i].erase(0, d);
			a[i] = a[i] + b;
		}
	}
}
