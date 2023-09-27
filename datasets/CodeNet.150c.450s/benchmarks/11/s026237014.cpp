#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;

	int card[4][13] = {};
	int i = 0;
	char mark;
	int num;
	while(i < n){
		cin >> mark >> num;
		if(mark == 'S'){
			card[0][num-1] = 1;
		}else if(mark == 'H'){
			card[1][num-1] = 1;
		}else if(mark == 'C'){
			card[2][num-1] = 1;
		}else if(mark == 'D'){
			card[3][num-1] = 1;
		}
		i++;
	}

	for(int j = 0; j < 4; j++){
		for(int k = 0; k < 13; k++){
			if(card[j][k] == 0){
				if(j == 0){
					cout << "S " << k + 1 << endl;
				}else if(j == 1){
					cout << "H " << k + 1 << endl;
				}else if(j == 2){
					cout << "C " << k + 1 << endl;
				}else if(j == 3){
					cout << "D " << k + 1 << endl;
				}
			}
		}
	}

	return 0;
}