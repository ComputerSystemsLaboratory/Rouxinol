#include<iostream>
using namespace std;

int main(){
	int r,c,i,j;
	cin >> r >> c;
	int a[r+1][c+1];
	for(i=0;i<r+1;i++){
		for(j=0;j<c+1;j++){
			a[i][j]=0;
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin >> a[i][j];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			a[i][c]+=a[i][j];
		}
	}
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			a[r][i]+=a[j][i];
		}
	}
	for(i=0;i<r;i++){
			a[r][c]+=a[i][c];
	}
	
	for(i=0;i<r+1;i++){
		for(j=0;j<c+1;j++){
			cout << a[i][j] ;
			if(j!=c) cout <<" ";
		}
		cout << endl;
	}
}