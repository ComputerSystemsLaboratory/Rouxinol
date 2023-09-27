#include<iostream>
using namespace std;

int main(){
	
	int n,m;
	cin >> n >>m;

	int mat[n][m];
	int vec[m], res[n];
	
	int i,k; 
	for (i=0; i<n; i++){
		for (k=0; k<m; k++){
			cin >> mat[i][k];
		}
	}
	for (k=0; k<m; k++){
		cin >> vec[k];
	}
	for (i=0; i<n; i++){
		res[i]=0;
	}

	for (i=0; i<n; i++){
		for (k=0; k<m; k++){
			res[i]+=mat[i][k]*vec[k];
		}
		cout << res[i] <<"\n";
	}		
	
	return 0;
}