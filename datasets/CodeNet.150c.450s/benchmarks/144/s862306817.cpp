#include <iostream>
#include <string>
using namespace std;

int main(){
	long long int n,m,l,A[100][100],B[100][100],i,j,k,C[100][100];
	cin >> n >> m >> l;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin >> A[i][j];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			cin >> B[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			C[i][j]=0;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			for(k=0;k<m;k++){
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			cout << C[i][j];
			if(j!=l-1) cout << " ";
		}
		cout << endl;
	}

	return 0;
}