#include <iostream>
using namespace std;
int main()
{
	int r, c, i, j;
	cin >> r >> c;

	int k, t;
	int* row = new int[c+1];
	for( j = 0; j < c+1; ++j) 
		row[j] = 0;

	for( i = 0; i < r; ++i){
		t = 0;
		for(j = 0; j < c; ++j){
			cin >> k;
			cout << k << " ";
			t += k;
			row[j] += k;
		}
		cout << t << "\n";
		row[c] += t; 
	}

	for( j = 0; j < c+1; ++j){
		cout << row[j];
		if( j != c )
			cout << " ";
	}

	cout << "\n";

	delete[] row;

	return 0;
}