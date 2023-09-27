#include <iostream>

using namespace std;

int main(){
	int r, c;
	cin >> r >> c;
	int table[101][101] = {};
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			int e;
			cin >> e;
			table[i][j] = e;
			table[r][j] += e;
			table[i][c] += e;
			table[r][c] += e;
		}
	}

	for(int i = 0; i < r + 1; i++){
		for(int j = 0; j < c + 1; j++){
			cout << table[i][j];
			if(j != c) cout << " ";
		}
		cout << endl;
	}

	return 0;
}