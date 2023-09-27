#include<iostream>

using namespace std;

int main() {
	
	int a, b, c;
	
	while( cin >> a >> b >> c) {

	int A[101][101] = {};
	int B[101][101] = {};
	long long C[101][101] = {};
	
	for(int i=0;i<a;i++)
	for(int j=0;j<b;j++)
	cin >> A[i][j];
	
	for(int i=0;i<b;i++)
	for(int j=0;j<c;j++)
	cin >> B[i][j];
	
	for(int i=0;i<a;i++) 
		
	for(int j=0;j<c;j++) 
		
	for(int k=0;k<b;k++)
	C[i][j] += ( A[i][k] * B[k][j] );
	
	for(int i=0;i<a;i++) {
	for(int j=0;j<c;j++) {
		
	if( j != c-1 )
	cout << C[i][j] << " ";
	
	else
	cout << C[i][c-1];
	}
	cout << "\n";
}
}
	return 0;
}
