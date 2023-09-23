#include<iostream>
using namespace std;
int main(){
	int r,c;
	cin >> r >> c;
	int A[r][c],cona[r],conb[c];
	int sam=0;

	for(int i=0; i<r; i++) cona[i] = 0;
	for(int j=0; j<c; j++) conb[j] = 0;

	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin >> A[i][j];
			cona[i] += A[i][j];
			conb[j] += A[i][j];
		}
	}

	int i,j;

	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if(j>0) cout << " ";
			cout << A[i][j];
		}

		cout << " " << cona[i] << endl;
	}

	for(j=0; j<c; j++){
		sam += conb[j];
		cout << conb[j] << " ";
	}

	cout << sam << endl;

	return 0;

}