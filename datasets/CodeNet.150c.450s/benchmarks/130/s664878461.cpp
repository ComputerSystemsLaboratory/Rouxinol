#include<iostream>

using namespace std;

int main() {
	
	int x, y;
	
	while( cin >> x >> y) {
		
		int A[100][100] = {}, B[100][1] ={}, C[100][1] = {};
		
		for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
		cin >> A[i][j];	

		for(int i=0;i<y;i++)
		cin >> B[i][0];	
	
		for(int i=0;i<x;i++)
			for(int j=0;j<y;j++)
			C[i][0] += A[i][j] * B[j][0]; 
		
		for(int i=0;i<x;i++)
		cout << C[i][0] << "\n";
}
	return 0;
}
