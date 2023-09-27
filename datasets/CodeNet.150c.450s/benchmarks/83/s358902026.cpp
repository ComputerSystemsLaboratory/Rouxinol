#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <set>
#include <utility>

using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int A[n],B[n];
	for (int i =0 ; i < n; i++) {
		cin >> A[i] >> B[i];
	}
	int C[n+1][m+1];
	for(int i = 0;i <= n;i++) {
		C[i][0]=0;
	}
	for(int i = 0;i <= m;i++){
		C[0][i]=0;
	}
	for(int j = 1;j <= m;j++){
		for(int i = 1;i <= n;i++) {
			if(j < B[i-1])
				C[i][j] = C[i-1][j];
			else{
				if(C[i-1][j] >= C[i-1][j - B[i-1]] + A[i-1]) 
					C[i][j] = C[i-1][j];
				else
					C[i][j] = C[i-1][j-B[i-1]] + A[i-1];
			}
		}
	}
	cout << C[n][m] << endl;
}