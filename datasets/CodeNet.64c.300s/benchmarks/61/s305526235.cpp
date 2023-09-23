#include <iostream>
using namespace std;
int main(){
	int r,c;
	cin >> r >> c ;
	int matrix[101][101];
	
	for(int i=0; i<r ;i++){
		for(int j=0 ;j<c;j++){
			cin >>matrix[i][j];
		}
	}
	//input end
	
	//start caliculation
	for(int i=0;i<r;i++){
		matrix[i][c] =0;
		for(int j=0;j<c;j++){
			matrix[i][c] += matrix[i][j];
		}
	}
	// end line sum
	//start row sum
	for(int i=0;i<c;i++){
		matrix[r][i] =0;
		for(int j=0;j<r;j++){
			matrix[r][i] += matrix[j][i];
		}
	}
	//end
	//start total
	matrix[r][c] =0;
	for(int i=0;i<c;i++){
		matrix[r][c] += matrix[r][i];
	}
	//start output
	for(int i = 0; i<=r ;i++){
		for(int j = 0; j<=c ;j++){
			cout<<matrix[i][j];
			if(j!=c){cout <<" ";}
			else{cout <<endl;}
		}
	}

}