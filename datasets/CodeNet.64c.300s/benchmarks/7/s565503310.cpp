#include<iostream>
using namespace std;


int main()
{
	int n;
	int card[4][14] = { {0} };
	cin >> n;
	for (int i = 0; i < n; i++){
		char c;
		int num, mark;
		cin >> c >> num;
		if (c == 'S'){
			mark = 0;
		}
		else if (c == 'H'){
			mark = 1;
		}
		else if (c == 'C'){
			mark = 2;
		}
		else{
			mark = 3;
		}
		card[mark][num] = 1;
	}
	for (int i = 0; i < 4; i++){
		for (int j = 1; j < 14; j++){
			char c;
			if (card[i][j] == 0){
				if (i == 0){
					c = 'S';
				}
				else if (i == 1){
					c = 'H';
				}
				else if (i == 2){
					c = 'C';
				}
				else{
					c = 'D';
				}
				cout << c << " " << j << endl;
			}
		}
	}
	return 0;
}