#include<iostream>
using namespace std;

int main() {
	int resi[5][4][11];
	int n,b,f,r,v;
	for (int b = 1; b <= 4; b++)
		for (int f = 1; f <= 3; f++)
			for (int r = 1; r <= 10; r++)
				resi[b][f][r] = 0;
	cin >> n;
	for (int s = 0; s < n; s++) {
		cin >> b >> f >> r >> v;
		resi[b][f][r] += v;
	}
	for (int b = 1; b <= 4; b++) {
		for (int f = 1; f <= 3; f++) {
			for (int r = 1; r <= 10; r++) {
				cout << " " << resi[b][f][r];
			}
			cout << endl;
		}
		if(b<4) cout << "####################" << endl;
	}
	return 0;
}