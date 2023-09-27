#include <iostream>
#include <vector>
#include <map>

#define PI 3.14159265359	

using namespace std;

int main(){
	int n, m, l;
	long long sum;
	cin >> n >> m >> l;
	vector<vector<int> > a(n, vector<int>(m)), b(m, vector<int>(l));
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++) cin >> a[i][j];
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < l; j++) cin >> b[i][j];
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < l; j++){
			sum = 0;
			for (int k = 0; k < m; k++){
				sum += a[i][k] * b[k][j];
			}
			cout << sum;
			if (j != l - 1) cout << " ";
		}
		cout << endl;
	}
}