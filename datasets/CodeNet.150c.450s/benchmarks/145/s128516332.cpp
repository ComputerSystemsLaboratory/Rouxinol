#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string k[100];
	int kk[100][2];
	string a;
	int n = 0;
	int judge;
	int maxa = 0;
	int maxb = 0;
	string aa,bb;

	while(cin >> a) {
		if (n == 0) {
			k[0] = a;
			kk[0][0] = 1;
			kk[0][1] = a.size();
		} else {
			judge = 0;
			for (int i = 0; i < n; i++) {
				if (k[i] == a) {
					kk[i][0]++;
					judge = 1;
					break;
				}
			}
			if (judge == 0) {
				k[n] = a;
				kk[n][0] = 1;
				kk[n][1] = a.size();
			} else {
				continue;
			}
		}
		n++;
		
	}

	for (int i = 0; i < n; i++) {
		if (kk[i][0] > maxa) {
			aa = k[i];
			maxa = kk[i][0];
		}
		if (kk[i][1] > maxb) {
			bb = k[i];
			maxb = kk[i][1];
		}
	}
	
	cout << aa <<  " " << bb << endl;

	return 0;
}