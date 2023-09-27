#include <iostream>

using namespace std;

int main(){
	int r, c;
	cin >> r >> c;
	int spreadsheet[101][101] = {};
	for(int i = 0; i < r; i++){
		int sum = 0;
		for(int j = 0; j < c + 1; j++){
			if(j < c){
				int e;
				cin >> e;
				spreadsheet[i][j] = e;
				sum += e;
			}
			else{
				spreadsheet[i][j] = sum;
			}
		}
	}

	for(int i = 0; i < c + 1; i++){
		int sum = 0;
		for(int j = 0; j < r + 1; j++){
			if(j < r){
				sum += spreadsheet[j][i];
			}
			else{
				spreadsheet[j][i] = sum;
			}
		}
	}

	for(int i = 0; i < r + 1; i++){
		for(int j = 0; j < c + 1; j++){
			cout << spreadsheet[i][j];
			if(j < c){
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}