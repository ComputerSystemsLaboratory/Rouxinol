#include <iostream>

#define N 101
using namespace std;

int main(){

	int r , c;
	int ary[N][N];
	int ans_L[N] = {0} , ans_H[N] = {0};
	int sum = 0;

	cin >> r >> c; 

	for(int i = 1; i <= r; i++){
		for(int j = 1; j <= c; j++){
			cin >> ary[i][j];
			ans_L[i] += ary[i][j];
		}
	}for(int j = 1; j <= r; j++){
		for (int i = 1; i <= c; i++)
		{
			ans_H[i] += ary[j][i];
		}
	}

	for(int i = 1; i <= r; i++){
		for(int j = 1; j <= c; j++){
			cout << ary[i][j] << " ";
		}
		cout << ans_L[i] << endl;
		sum += ans_L[i];
	}for(int i = 1; i <= c; i++){
		cout << ans_H[i] << " ";
	}cout << sum << endl;

	return 0;
}