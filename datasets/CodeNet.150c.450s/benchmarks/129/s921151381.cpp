#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){

	int r,c,buf;

	cin >> r >> c;

	vector < vector < int> > table(r+1, vector <int>(c+1, 0));


	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			cin >> buf;
			table[i][j] = buf;
			cout << buf << " ";
			table[i][c] += buf;
			table[r][j] += buf;
			table[r][c] += buf;
		}
		cout << table[i][c] << endl;
	}

	for (int j = 0; j < c; j++){
		cout << table[r][j] << " ";
	}
	cout << table[r][c] << endl;


	return 0;
}