#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
const int M = 100000;
const double pi = 3.141592653589;

int main(){
	int m[M], f[M], r[M];
	int i = 0;
	while (1) {
		cin >> m[i] >> f[i] >> r[i];
		if (m[i] == -1 && f[i] == -1 && r[i] == -1) {
			break;
		}
		i++;
	}
	for (int k = 0; k < i; k++) {
		if (m[k] != -1 && f[k] != -1) {
			if (m[k] + f[k] >= 80) cout << "A" << endl;
			else if (m[k] + f[k] >= 65 && m[k] + f[k] < 80) cout << "B" << endl;
			else if (m[k] + f[k] >= 50 && m[k] + f[k] < 65) cout << "C" << endl;
			else if (m[k] + f[k] >= 30 && m[k] + f[k] < 50) {
				if (r[k] >= 50) {
					cout << "C" << endl;
				}
				else {
					cout << "D" << endl;
				}
			}
		}
		if (m[k] + f[k] < 30 || m[k] == -1 || f[k] == -1) cout << "F" << endl;
	}

	return 0;
}