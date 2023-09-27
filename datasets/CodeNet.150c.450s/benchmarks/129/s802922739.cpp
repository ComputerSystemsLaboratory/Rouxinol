#include <iostream>
//#include <stdio.h>
using namespace std;

int main(){
	int r,c;
	int a[101][101];
	int sum;
	cin >> r >> c;
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			cin >> a[i][j];
		}
	}
	
	for (int i=0;i<r;i++){
		sum = 0;
		for (int j=0;j<c;j++){
			sum += a[i][j];
			cout << a[i][j] << " ";
		}
		cout << sum << endl;
	}
	
	for (int i=0;i<c;i++){
		sum = 0;
		for (int j=0;j<r;j++){
			sum += a[j][i];
		}
		cout << sum << " ";
	}
	sum = 0;
	for (int i=0;i<c;i++){;
		for (int j=0;j<r;j++){
			sum += a[j][i];
		}
	}
	cout << sum << endl;
	return 0;
}