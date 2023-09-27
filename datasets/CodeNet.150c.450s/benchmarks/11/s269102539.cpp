#include <iostream>
using namespace std;

int main(){
	bool S[13] = {false},
		 H[13] = {false},
		 C[13] = {false},
		 D[13] = {false};
	int n, num;
	char c[1];
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> c[0] >> num;
		switch(c[0]){
		case 'S':
			S[num-1] = true;
			break;
		case 'H':
			H[num-1] = true;
			break;
		case 'C':
			C[num-1] = true;
			break;
		case 'D':
			D[num-1] = true;
			break;
		}
	}
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 13; j++){
			switch(i){
			case 0:
				if(S[j] == false){
					cout << "S " << j+1 << endl;
				}
				break;
			case 1:
				if(H[j] == false){
					cout << "H " << j+1 << endl;
				}
				break;
			case 2:
				if(C[j] == false){
					cout << "C " << j+1 << endl;
				}
				break;
			case 3:
				if(D[j] == false){
					cout << "D " << j+1 << endl;
				}
				break;
			}
		}
	}
	return 0;
}