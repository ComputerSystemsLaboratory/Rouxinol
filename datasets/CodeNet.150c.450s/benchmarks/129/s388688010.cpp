#include <iostream>
using namespace std;

int main() {
	int r,c ;
	cin >> r >> c;
	
	int matrix[r+1][c+1];
	matrix[r][c]=0;
	for(int i=0; i<r; i++){
		matrix[i][c]=0;
		for(int j=0; j<c; j++){
			if(i==0)matrix[r][j]=0;
			cin >> matrix[i][j];
			cout << matrix[i][j] << " ";
			matrix[r][j]+=matrix[i][j];
			matrix[i][c]+=matrix[i][j];
			matrix[r][c]+=matrix[i][j];
		}
		cout<<matrix[i][c]<<endl;
		
	}
	
	for(int i=0;i<c;i++){
		cout<<matrix[r][i]<<" ";
	}
	cout<< matrix[r][c]<<endl;
	
	return 0;
}