#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int b[240], f[240], r[240], v[240], A[4][3][10] = {0};
	for(int i = 0; i < n; i++){
		cin >> b[i] >> f[i] >> r[i] >> v[i];
		A[b[i]-1][f[i]-1][r[i]-1] += v[i];
		if(A[b[i]-1][f[i]-1][r[i]-1] < 0) A[b[i]-1][f[i]-1][r[i]-1] = 0;
		if(A[b[i]-1][f[i]-1][r[i]-1] > 9) A[b[i]-1][f[i]-1][r[i]-1] = 9;
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