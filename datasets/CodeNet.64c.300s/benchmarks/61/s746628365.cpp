#include <iostream>
using namespace std;

int main()
{
	int r, c, a[101][101] = {0};

	cin >> r >> c;
	//DWORD start = GetTickCount();//スタート時間

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> a[i][j];
			a[i][c] += a[i][j];
			a[r][j] += a[i][j];
		}
		a[r][c] += a[i][c];
	}


	for(int i = 0; i <= r; i++){
		for(int j = 0; j <= c; j++){
			cout <<  a[i][j];
			if(j < c){
				cout << ' ';
			}
		}
		cout << endl;
	}

	//DWORD end = GetTickCount();//終了時間
	//cout << "time = " << (double)(end - start) / 1000 << "sec.\n";

	return 0;
}