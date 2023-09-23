#include <iostream>
using namespace std;

int main(){
	int n;
	char Ch;
	int x;
	int a[5][14] = {0};
	cin >> n;
	for (int i = 0; i < n; i++){
			cin >> Ch >> x;
			switch (Ch){
			case 'S':
				a[1][x] = x;
				break;
			case 'H':
				a[2][x] = x;
				break;
			case 'C':
				a[3][x] = x;
				break;
			case 'D':
				a[4][x] = x;
				break;
			default:
				break;
			}
	}
	for (int i = 1; i < 5; i++){
		for (int j = 1; j < 14; j++){
			if (a[i][j] == 0){
				switch (i){
				case 1:
					cout << 'S' << " " << j << endl;
					break;
				case 2:
					cout << 'H' << " " << j << endl;
					break;
				case 3:
					cout << 'C' << " " << j << endl;
					break;
				case 4:
					cout << 'D' << " " << j << endl;
					break;
				}
			}
		}
	}
	return 0;
}