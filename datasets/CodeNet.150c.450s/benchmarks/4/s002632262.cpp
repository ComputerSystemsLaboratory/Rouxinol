#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
typedef vector<int> vi;
typedef vector< vi > vvi;
int main() {
	int m, f, r, S;
	while (cin >> m >> f >> r) {
		S = m + f;
		if(m == -1 && f == -1 && r == -1){
			break;
		}
		else {
			if (m == -1 || f == -1 || S < 30) {
				cout << 'F' << endl;
			}
			else {
				if (S >= 80) {
					cout << 'A' << endl;
				}
				else if (S < 80 && S >= 65) {
					cout << 'B' << endl;
				}
				else if(S < 65 && S >= 50){
					cout << 'C' << endl;
				}
				else if (S < 50 && S >= 30) {
					if(r >= 50){
						cout << 'C' << endl;
					}
					else {
						cout << 'D' << endl;
					}
				}
			}
		}
	}
}