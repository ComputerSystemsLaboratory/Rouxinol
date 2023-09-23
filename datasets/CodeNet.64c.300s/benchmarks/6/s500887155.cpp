#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int A[4][3][10] = {0};
	for(int i = 0; i < n; i++){
		int b, f, r, v;
		cin >> b >> f >> r >> v;
		A[b-1][f-1][r-1] += v;
		if(A[b-1][f-1][r-1] < 0) A[b-1][f-1][r-1] = 0;
		if(A[b-1][f-1][r-1] > 9) A[b-1][f-1][r-1] = 9;
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 10; k++) cout << ' ' << A[i][j][k];
			cout << endl;
		}
		if(i < 3){
			for(int j = 0; j < 20; j++) cout << '#';
			cout << endl;
		}
	}
	return 0;
}