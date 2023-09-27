#include<iostream>
using namespace std;



int main(){
	bool cards[4][13];
	for (int j = 0; j < 13; j++){
		for (int i = 0; i < 4; i++){
			cards[i][j] = false;
		}
	}
	int n;
	char a;
	int b;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a >> b;
		switch (a)
		{
		case 'S':
			cards[0][b - 1] = true;
			break;
		case 'H':
			cards[1][b - 1] = true;
			break;
		case 'C':
			cards[2][b - 1] = true;
			break;
		case 'D':
			cards[3][b - 1] = true;
			break;
		default:
			break;
		}
	}

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 13; j++){
			if (cards[i][j] == false){
				switch (i)
				{
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
				default:
					break;
				}
			}
		}
	}
	return 0;
}