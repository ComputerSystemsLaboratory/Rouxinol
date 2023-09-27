#include<iostream>
using namespace std;


int main()
{
	int n, m, l;
	long long a[102][102], b[102][102];
	cin >> n >> m >> l;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < l; j++){
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < l; j++){
			long long sum = 0;
			for (int k = 0; k < m; k++){
					sum += a[i][k] * b[k][j];
			}
			if (j < l - 1){
				cout << sum <<" ";
			}
			else{
				cout << sum << endl;
			}
		}
	}
	return 0;
}