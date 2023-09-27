#include<iostream>
using namespace std;

int main(){
	
	long long n,m,l;
	cin >> n >> m >> l ;
	
	long long i,j,k;
	long long mat1[n][m];
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			cin >> mat1[i][j];
		}
	}
	
	long long mat2[m][l];
	for (j=0; j<m; j++){
		for (k=0; k<l; k++){
			cin >> mat2[j][k];
		}
	}
	 
	long long mat3[n][l];
	for (i=0; i<n; i++){
		for (k=0; k<l; k++){
			mat3[i][k]=0;
		}	
	}	

	for (i=0; i<n; i++){	
		for (k=0; k<l; k++){
			for (j=0; j<m; j++){
				mat3[i][k]+= mat1[i][j]*mat2[j][k];
			}
		}	
	}	
	
	for (i=0; i<n; i++){
		for (k=0; k<l; k++){
			cout << mat3[i][k] ;
			if (k!=l-1) cout << " ";
		}	
		cout << "\n";
	}		
	
	return 0;
}