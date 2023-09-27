#include <iostream>
//#include <stdio.h>
using namespace std;

int main(){
	int n,m,l;
	long sum;
	int a[102][102],b[102][102],c[102][102];

	cin >> n >> m >> l;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin >> a[i][j];
		}
	}
	for (int i=1;i<=m;i++){
		for (int j=1;j<=l;j++){
			cin >> b[i][j];
		}
	}
	
	for (int i=1;i<=n;i++){
		for (int j=1;j<=l;j++){
			sum = 0;
			for (int k=1;k<=m;k++){
				sum += a[i][k] * b[k][j];
			}
			if (j != 1) cout << " ";
			cout << sum;
		}
		cout << endl;
	}
	
	return 0;
}