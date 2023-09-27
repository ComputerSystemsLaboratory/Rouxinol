#include<iostream>

using namespace std;
int main(){
	int n = 0, v = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int s[5][4][11] = {0};
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a >> b >> c >> d;
		s[a][b][c] = s[a][b][c] + d;
	}
	for (int j = 1; j <= 4; j++){
		for (int k = 1; k <= 3; k++){
			for (int l = 1; l <= 10; l++){
				cout << " ";
				cout << s[j][k][l];
			}
			cout << endl;
		}
		if (j != 4){
			for (int nj = 0; nj < 20; nj++){
				cout << "#";
			}
			cout << endl;
		}
	}
	return 0;
}