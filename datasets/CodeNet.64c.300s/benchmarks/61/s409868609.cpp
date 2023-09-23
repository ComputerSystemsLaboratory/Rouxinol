#include <iostream>
using namespace std;
int main(){
	int r,c;
	cin >> r >> c;
	int a[r+1][c+1];
	for(int i=0;i<r;i++){
		int b = 0;
		for(int j=0;j<c;j++){
			cin >> a[i][j];
			b += a[i][j];
		}
		a[i][c] = b;
	}
	for(int j=0;j<=c;j++){
		int b = 0;
		for(int i=0;i<r;i++) b += a[i][j];
		a[r][j] = b;
	}
	for(int i=0;i<=r;i++){
		for(int j=0;j<c;j++) cout << a[i][j] << " ";
		cout  << a[i][c] << endl;
	}
}