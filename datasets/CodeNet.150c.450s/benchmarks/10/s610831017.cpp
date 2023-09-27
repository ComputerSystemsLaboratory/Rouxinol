#include<iostream>
using namespace std;

int main(){

	int n, b, f, r, v;
	int A[5][4][11] = {0};

	cin >> n;

	for(int i = 0; i < n; i++ ){
		cin >> b >> f >> r >> v;
		A[b][f][r] = A[b][f][r] + v; 
		//	ここから入居者数の条件 0以下の場合と9以上の場合
		if(A[b][f][r] > 9) A[b][f][r] = 9;
		if(A[b][f][r] < 0) A[b][f][r] = 0;
	}

	for(int i = 1; i <= 4; i++){
		for(int j = 1; j <= 3; j++){
			for(int k = 1; k <=10; k++){
				if(k == 1) cout << " ";
				cout << A[i][j][k] << " \n"[k == 10];
			}
		}
		if(i < 4)cout << "####################" << endl;
	}
	

	return 0;
}
