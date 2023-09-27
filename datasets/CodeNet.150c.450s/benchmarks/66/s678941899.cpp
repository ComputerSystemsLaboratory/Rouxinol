#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	string a[256];
	for (int i = 0; i < n; i++) cin >> a[i];
	int m;
	cin >> m;
	bool l = false;
	for (int i = 0; i < m; i++) {
		string b;
		cin >> b;
		for (int j = 0; j < n; j++) {
			if (a[j] == b) {
				if (!l) {
					cout << "Opened by " + b << endl;
				}
				else {
					cout << "Closed by " << b << endl;
				}
				l = !l;
				goto stop;
			}
		}
		cout << "Unknown " << b << endl;
	stop:;
	}
} 