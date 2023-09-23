#include <iostream>
using namespace std;

int main()
{
	int r, c, x;
	cin >> r >> c;

	int table[r+1][c+1];

	for(int i=0; i<r+1; ++i)
		for(int j=0; j<c+1; ++j)
			table[i][j] = 0;

	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j) {
			cin >> x;
			table[i][j] = x;
			table[i][c] += x;
			table[r][j] += x;
		}
		table[r][c] += table[i][c];
	}

	++r; ++c;
	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j) 
			cout << table[i][j] << ( (j<c-1) ? " " : "" );
		cout << '\n';
	}

	return 0;
}


