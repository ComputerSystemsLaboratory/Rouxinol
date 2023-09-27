#include <iostream>
using namespace std;
//3????????°??¨3???????????°??????????????????????????°??????

int main(){

	int n, b;
	char a;
	int card[4][13] = {};

	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> a >> b;

		if (a == 'S')
			card[0][b - 1] = 1;
		if (a == 'H')
			card[1][b - 1] = 1;
		if (a == 'C')
			card[2][b - 1] = 1;
		if (a == 'D')
			card[3][b - 1] = 1;
	}


	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 13; j++){
			if (card[i][j] == 0){
				switch (i){
				case 0:
					cout << "S " << j + 1 << endl;
					break;
				case 1:
					cout << "H " << j + 1 << endl;
					break;
				case 2:
					cout << "C " << j + 1 << endl;
					break;
				case 3:
					cout << "D " << j + 1 << endl;
					break;						
				}
				
				}
		
		}
	}


	return 0;
}