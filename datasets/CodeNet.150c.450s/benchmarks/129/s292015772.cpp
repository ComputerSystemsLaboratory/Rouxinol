#include <iostream>
#include <stdio.h>
using namespace std;
 
int main(){
	int r,c,i,j,d[101][101];
	
	cin >> r >> c;

	for(i=0;i<=r;i++){
		for(j=0;j<=c;j++){
			d[i][j]=0;
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin >> d[i][j];
			d[i][c]=d[i][c]+d[i][j];
			d[r][j]=d[r][j]+d[i][j];
		}
	}
	
	for(i=0;i<r;i++){
		d[r][c]=d[r][c]+d[i][c];
	}
	
	for(i=0;i<=r;i++){
		for(j=0;j<c;j++){
			cout << d[i][j] << " ";
		}
		cout << d[i][c] << endl;
	}
	
    return 0;
}