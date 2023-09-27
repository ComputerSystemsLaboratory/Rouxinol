#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){

	const int N_MAX = 14;
	int n,number;
	char suit;
	int S[N_MAX], H[ N_MAX ], C[ N_MAX ], D[ N_MAX ];

	for (int i = 0; i < N_MAX; i++){
		S[i] = 0;
		H[i] = 0;
		C[i] = 0;
		D[i] = 0;
	}

	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> suit >> number;
		switch (suit){
		case 'S':
			S[number] = 1;
			break;
		case 'H':
			H[number] = 1;
			break;
		case 'C':
			C[number] = 1;
			break;
		case 'D':
			D[number] = 1;
			break;
		default:
			break;
		}
	}

	for (int i = 1; i < N_MAX; i++){
		if (S[i] == 0){
			cout << "S " << i << endl;
		}
	}
	for (int i = 1; i < N_MAX; i++){
		if (H[i] == 0){
			cout << "H " << i << endl;
		}
	}
	for (int i = 1; i < N_MAX; i++){
		if (C[i] == 0){
			cout << "C " << i << endl;
		}
	}
	for (int i = 1; i < N_MAX; i++){
		if (D[i] == 0){
			cout << "D " << i << endl;
		}
	}


	return 0;
}