#include <iostream>
using namespace std;

int main()
{
	char k;
	int num, n;
	int c[4][13];
	
	for(int i = 0; i < 4 ; i++) {
		for(int j = 0; j < 13 ; j++)
			c[i][j] = 1;
	}
	
	cin >> num;
	
	for (int i = 0; i < num; i++) {
		cin >> k >> n;
		if(k=='S')
			c[0][n-1] = 0;
		else if (k=='H')
			c[1][n-1] = 0;
		else if (k=='C')
			c[2][n-1] = 0;
		else
			c[3][n-1] = 0;	
	}

	for(int i = 0; i < 4 ; i++) {
		for(int j = 0; j < 13 ; j++) {
			if(c[i][j]) {
				if(i==0)
					cout << "S " << j + 1;
				else if(i==1)
					cout << "H " << j + 1;
				else if(i==2)
					cout << "C " << j + 1;
				else
					cout << "D " << j + 1;
				cout << endl;
			}
		}	
	}
	return 0;
}