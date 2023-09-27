#include <iostream>

using namespace std;

int main(){
	int r, c;
	int t[103][103] = {0};
	
	cin >> r >> c;
	
	for(int i = 1; i <= r;i++){
		for(int j = 1; j <= c;j++){
			cin >> t[i][j];
			t[r+1][j] += t[i][j];
			t[i][c+1] += t[i][j];
			t[r+1][c+1] += t[i][j];
		}
	}
	
	for(int i = 1; i <= r+1;i++){
		for(int j = 1; j <= c+1;j++){
			cout << t[i][j];
			if(j != c+1) cout << " ";
		}
		cout << endl;
	}
	
	return 0;
}