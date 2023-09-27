#include<iostream>
using namespace std;


int main(){
	
	int r,c;
	cin >> r >> c ;
	int mat[r][c];
	
	int i,j;
	for (i=0; i<r; i++){
		for (j=0; j<c; j++){
			cin >> mat[i][j] ;
		}
	}

	int vecr[r];
	for (i=0; i<r; i++){
		for (j=0; j<c; j++){
			vecr[i] =0 ;
		}
	}	
	for (i=0; i<r; i++){
		for (j=0; j<c; j++){
			vecr[i] += mat[i][j] ;
		}
	}
	
	int vecc[c];
	for (j=0; j<c; j++){
		for (i=0; i<r; i++){
			vecc[j]=0;
		}
	}	
	for (j=0; j<c; j++){
		for (i=0; i<r; i++){
			vecc[j] += mat[i][j];
		}
	}
	
	int sum=0;
	for (i=0; i<r; i++){
		sum += vecr[i];
	}

	for (i=0; i<r+1; i++){
		for (j=0; j<c+1; j++){
			if (i<r && j<c)cout << mat[i][j] << " ";
			else if (i<r && j==c) cout << vecr[i] ; 
			else if (i==r && j<c) cout << vecc[j] << " ";
			else if (i==r && j==c) cout << sum ;
		}
		cout << "\n" ;
	}	
	
	return 0;
	
}