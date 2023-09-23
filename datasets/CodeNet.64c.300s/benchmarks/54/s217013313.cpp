#include <iostream>
#include <cstring>
using namespace std;
int main(void){

	int n, m[101];
	long long d[101][21];
	memset(d, 0, sizeof(d));

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> m[i];

	d[0][m[0]] = 1;
	for (int i = 1; i < n - 1; i++){
		for (int j = 0; j < 21; j++){
			if (d[i - 1][j] != 0){
				if (j - m[i] >= 0)
					d[i][j - m[i]] += d[i - 1][j];
				if (j + m[i] <= 20)
					d[i][j + m[i]] += d[i - 1][j];
			}
		}
	}
	cout << d[n - 2][m[n - 1]] << endl;
}