#include<iostream>
using namespace std;

int main()
{
	int r, c;
	int i, j;
	
	cin >> r >> c;
	int matrix[r+1][c+1];
	
	for(i=0;i<r+1;i++){
		for(j=0;j<c+1;j++){
			matrix[i][j]=0;
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin >> matrix[i][j];
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			matrix[i][c]+=matrix[i][j];
		}
	}
	
	for(j=0;j<=c;j++){
		for(i=0;i<r;i++){
			matrix[r][j]+=matrix[i][j];
		}
	}
	
	for(i=0;i<r+1;i++){
		for(j=0;j<c+1;j++){
			cout << matrix[i][j];
			if(j!=c)
				cout << ' ';
		}
		cout << endl;
	}
	return 0;
}