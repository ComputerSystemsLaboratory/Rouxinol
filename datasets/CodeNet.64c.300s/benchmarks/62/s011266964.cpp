#include <iostream>
//#include <stdio.h>
using namespace std;

int main(){
	int A[101][101],b[101];
	int n, m;
	int sum;
	cin >> n >> m;
	
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin >> A[i][j];
		}
	}
	for (int i=1;i<=m;i++){
		cin >> b[i];
	}
	
	for (int i=1;i<=n;i++){
		sum = 0;
		for (int j=1;j<=m;j++){
			sum += A[i][j] * b[j];
		}
		cout << sum << endl;
	}
	
	return 0;
}