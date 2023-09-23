#include <iostream>
#include <vector>
using namespace std;

const long N = 100;

int main(){
	long n;
	cin >> n;
	long c[N + 1][N + 1];
	for (long i = 1; i <= n; i++){
		for (long j = 1; j <= n; j++){
			c[i][j] = 0;
		}
	}
	for (long i = 1; i <= n; i++){
		long u, k;
		cin >> u >> k;
		long m[N];
		for (long j = 1; j <= k; j++){
			cin >> m[j];
			c[u][m[j]] = 1;
		}
	}
	for (long i = 1; i <= n; i++){
		for (long j = 1; j <= n; j++){
			if (j - 1) cout << " ";
			cout << c[i][j];
		}
		cout << endl;
	}
}