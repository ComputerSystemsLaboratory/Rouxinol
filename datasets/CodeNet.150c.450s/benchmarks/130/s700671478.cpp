#include <iostream>
#include <vector>
using namespace std;

int main(){
	long n = 0;
	long m = 0;
	cin >> n >> m;
	vector< vector<long> > a(n);
	vector<long> b(m, 0);
	vector<long> c(n, 0);
	for (long i = 0; i < n; i++){
		a[i].resize(m);
	}
	for (long i = 0; i < n; i++){
		for (long j = 0; j < m; j++){
			a[i][j] = 0;
			cin >> a[i][j];
		}
	}
	for (long i = 0; i < m; i++){
		cin >> b[i];
	}
	for (long i = 0; i < n; i++){
		for (long j = 0; j < m; j++){
			c[i] += a[i][j] * b[j];
		}
	}
	for (long i = 0; i < n; i++){
		cout << c[i] << endl;
	}
	return 0;
}