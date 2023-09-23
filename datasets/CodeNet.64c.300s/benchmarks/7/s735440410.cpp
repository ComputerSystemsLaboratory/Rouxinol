#include <iostream>
using namespace std;
int main(){
	int n,number;
	char c;
	cin >> n;
	bool work[4][13];
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 13; j++){
			work[i][j] = 0;
		}
	}
	for(int i = 0; i < n; i++){
		cin >> c >> number;
		if(c == 'S'){
			work[0][number - 1] = 1;
		}else if(c == 'H'){
			work[1][number - 1] = 1;
		}else if(c == 'C'){
			work[2][number - 1] = 1;
		}else if(c == 'D'){
			work[3][number - 1] = 1;
		}
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 13; j++){
			if(work[i][j] == 0){
				if(i == 0){
					cout << "S ";
				}else if(i == 1){
					cout << "H ";
				}else if(i == 2){
					cout << "C ";
				}else if(i == 3){
					cout << "D ";
				}
				cout << j + 1 << endl;
			}
		}
	}
	return 0;
}