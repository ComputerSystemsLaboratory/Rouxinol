#include <iostream>
using namespace std;
int main()
{
	int r, c;
	cin >> r >> c;

	int k, t;
	int row[101] = {};

	for( int i = 0; i < r; ++i){
		t = 0;
		for(int j = 0; j < c; ++j){
			cin >> k;
			cout << k << " ";
			t += k;
			row[j] += k;
		}
		cout << t << "\n";
		row[c] += t; 
	}

	for( int j = 0; j < c+1; ++j){
		cout << row[j];
		if( j != c )
			cout << " ";
	}

	cout << "\n";

	return 0;
}