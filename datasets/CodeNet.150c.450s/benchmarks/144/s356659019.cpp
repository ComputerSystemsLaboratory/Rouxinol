#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	long int n=0,m=0,l=0;
	long int i=0,j=0,k=0;

	cin >> n >> m >> l;
	long int A[n+1][m+1];
	long int B[m+1][l+1];
	long int C[n+1][l+1];
	// ?????????
	for(i=0;i<=n;i++){
		for(j=0;j<=m;j++){
			A[i][j]=0;
		}
	}
	for(i=0;i<=m;i++){
		for(j=0;j<=l;j++){
			B[i][j]=0;
		}
	}
	for(i=0;i<=n;i++){
		for(j=0;j<=l;j++){
			C[i][j]=0;
		}
	}

	// ????????????
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin >> A[i][j];
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=l;j++){
			cin >> B[i][j];
		}
	}

	// ????????????
	for(i=1;i<=n;i++){
		for(j=1;j<=l;j++){
			for(k=1;k<=m;k++){
				C[i][j] += A[i][k]*B[k][j];
			}
		}
	}
	

	for(i=1;i<=n;i++){
		for(j=1;j<=l;j++){
			if(j==l){
				cout << C[i][j];
			}else{
				cout << C[i][j] << " ";
			}
		}
		cout << endl;
	}

return 0;
}