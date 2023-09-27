#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int r=0,c=0;
	int i=0,j=0,k=0;

	cin >> r >> c;
	int A[r+2][c+2];
	// ?????????
	for(i=0;i<r+2;i++){
		for(j=0;j<c+2;j++){
			A[i][j]=0;
		}
	}

	// ????????????
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			cin >> A[i][j];
		}
	}

	// ????????????
	for(i=1;i<=r+1;i++){
		for(j=1;j<=c;j++){
			A[i][c+1] += A[i][j];
		}
	}
	
	for(j=1;j<=c+1;j++){
		for(i=1;i<=r;i++){
			A[r+1][j] += A[i][j];
		}
	}


	for(i=1;i<=r+1;i++){
		for(j=1;j<=c+1;j++){
			if(j==c+1){
				cout << A[i][j];
			}else{
			cout << A[i][j] << " ";
			}
		}
		cout << endl;
	}

return 0;
}