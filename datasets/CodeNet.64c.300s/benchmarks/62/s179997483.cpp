#include<iostream>

using namespace std;
int main(){
	int n = 0;
	int m = 0;
	int A [105][105];
	int B [105];
	int s = 0;
	cin >> n >> m;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}
	for (int j = 0; j < m; j++){
		cin >> B[j];
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			s = A[i][j] * B[j] + s;
		}
		cout << s << endl;
		s = 0;
	}
}