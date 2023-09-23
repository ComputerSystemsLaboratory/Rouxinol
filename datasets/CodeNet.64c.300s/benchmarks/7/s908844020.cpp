#include <iostream>
using namespace std;

int c[4][13];

int main(void)
{
	int n;
	int i, j;
	char rank;
	int num;
	
	cin >> n;
	
	for (i = 0; i < n; i++){
		cin >> rank >> num;
		
		switch (rank){
		  case 'S':
		  	c[0][num - 1] = 1;
			break;
			
		  case 'H':
		  	c[1][num - 1] = 1;
			break;
			
		  case 'C':
		  	c[2][num - 1] = 1;
			break;
			
		  case 'D':
		  	c[3][num - 1] = 1;
			break;
		}
	}
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 13; j++){
			if (c[i][j] != 1){
				if (i == 0){
					cout << "S";
				}
				else if (i == 1){
					cout << "H";
				}
				else if (i == 2){
					cout << "C";
				}
				else if (i == 3){
					cout << "D";
				}
				cout << " " << j + 1 << endl;
			}
		}
	}
	return (0);
}