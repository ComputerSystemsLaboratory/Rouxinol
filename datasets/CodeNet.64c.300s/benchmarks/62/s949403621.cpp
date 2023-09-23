#include <iostream>

using namespace std;

int main(){
	int n, m;
	int A[101][101];
	int B[101];
	int C[101];
	
	cin >> n >> m;
	
	for(int i = 1;i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> A[i][j];
		}
	}
	
	for(int i = 1; i <= m; i++){
		cin >> B[i];
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			C[i] += A[i][j] * B[j];
		}
		cout << C[i] <<endl;
	}
	
	return 0;
}