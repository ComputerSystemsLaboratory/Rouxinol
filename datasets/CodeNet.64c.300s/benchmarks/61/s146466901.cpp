// 2014/07/21 Tazoe

#include <iostream>
using namespace std;

int main()
{
	int r, c;
	cin >> r >> c;

	int S[101][101];
	for(int i=0; i<=r; i++){
		for(int j=0; j<=c; j++){
			S[i][j] = 0;
		}
	}

	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin >> S[i][j];

			S[r][j] += S[i][j];
			S[i][c] += S[i][j];
		}

		S[r][c] += S[i][c];
	}

	for(int i=0; i<=r; i++){
		for(int j=0; j<=c; j++){
			cout << S[i][j];

			if(j==c){
				cout << endl;
			}
			else{
				cout << ' ';
			}
		}
	}

	return 0;
}