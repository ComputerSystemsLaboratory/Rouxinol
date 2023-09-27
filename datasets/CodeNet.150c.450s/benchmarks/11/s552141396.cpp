#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int ary[4][13] = { 0 };
	int n;
	int num;
	char mark;

	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> mark >> num;
		if (mark == 'S'){
			ary[0][num-1] = 1;
		}
		if (mark == 'H'){
			ary[1][num-1] = 1;
		}
		if (mark == 'C'){
			ary[2][num-1] = 1;
		}
		if (mark == 'D'){
			ary[3][num-1] = 1;
		}
	}

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 13; j++){
			if (ary[i][j] == 0){
				if (i == 0){
					cout << 'S' << ' ' << j + 1 << endl;
				}
				if (i == 1){
					cout << 'H' << ' ' << j + 1 << endl;
				}
				if (i == 2){
					cout << 'C' << ' ' << j + 1 << endl;
				}
				if (i == 3){
					cout << 'D' << ' ' << j + 1 << endl;
				}
			}
		}
	}
	return 0;
}