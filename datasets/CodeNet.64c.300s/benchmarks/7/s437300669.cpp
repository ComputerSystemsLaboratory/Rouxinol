#include <iostream>
using namespace std;

int main()
{
	int card[4][13],n,x; //S,H,C,D
	char mark;
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 13;j++) {
			card[i][j] = 1;
		}
	}
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> mark >> x;
		if (mark == 'S') { card[0][x-1] = 0; }
		else if (mark == 'H') { card[1][x-1] = 0; }
		else if (mark == 'C') { card[2][x-1] = 0; }
		else { card[3][x-1] = 0; }
	}

	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 13;j++) {
			if (card[i][j] == 1) {
				if (i == 0) { cout << "S " << j+1 << endl; }
				else if (i == 1) { cout << "H " << j+1 << endl; }
				else if (i == 2) { cout << "C " << j+1 << endl; }
				else { cout << "D " << j+1 << endl; }
			}
		}
	}
	return 0;

}