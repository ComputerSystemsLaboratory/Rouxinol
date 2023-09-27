#include<iostream>
using namespace std;
int main() {
	int house[4][3][10] = { 0 };
	int n;
	cin >> n;
	int b, f, r, v;
	for (int i = 0; i < n; i++){
		cin >> b >> f >> r >> v;
		house[b-1][f-1][r-1] += v;
	}
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 10; j++){		
				cout << " " << house[0][i][j];
				if (j == 9){
					cout << endl;
				}
		}
	}
	cout << "####################\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			cout << " " << house[1][i][j];
			if (j == 9) {
				cout << endl;
			}
		}
	}
	cout << "####################\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			cout << " " << house[2][i][j];
			if (j == 9) {
				cout << endl;
			}
		}
	}
	cout << "####################\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			cout << " " << house[3][i][j];
			if (j == 9) {
				cout << endl;
			}
		}
	}
	char c;
	cin >> c;
}