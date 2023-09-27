#include <iostream>
using namespace std;
int main()
{
	long long A[100][100] = {},
		      B[100][100] = {},
			  v;

	int n, m, l, i, j, k;
	cin >> n >> m >> l;
	
	for(i = 0; i < n; ++i){
		for(j = 0; j < m; ++j){
			cin >> A[i][j];
		}
	}

	for(i = 0; i < m; ++i){
		for(j = 0; j < l; ++j){
			cin >> B[i][j];
		}
	}

	for(i = 0; i < n; ++i){
		for(j = 0; j < l; ++j){
			v = 0;
			for(k = 0; k < m; ++k){
				v += A[i][k] * B[k][j];	
			}
			cout << v;
			if( j != l -1 )
				cout << " ";
		}
		cout << "\n";
	}

	return 0;
}