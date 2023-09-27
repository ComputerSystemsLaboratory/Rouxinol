#include <iostream>
#include <vector>
#include <map>

#define PI 3.14159265359	

using namespace std;

int main(){
	int r, c, sum;
	cin >> r >> c;
	vector<vector<int> > table(r + 1, vector<int>(c + 1));
	for (int i = 0; i < r; i++){
		sum = 0;
		for (int j = 0; j < c; j++){
			cin >> table[i][j];
			sum += table[i][j];
		}
		table[i][c] = sum;
	}
	for (int j = 0; j < c + 1; j++){
		sum = 0;
		for (int i = 0; i < r; i++)	{
			sum += table[i][j];
		}
		table[r][j] = sum;
	}
	for (int i = 0; i < r + 1; i++){
		for (int j = 0; j < c + 1; j++){
			cout << table[i][j];
			if (j != c) cout << " ";
		}
		cout << endl;
	}
}