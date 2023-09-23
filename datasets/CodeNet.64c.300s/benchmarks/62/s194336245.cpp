#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n >> m;
	int a[n][m];
	int b[m];
	int c = 0;

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < m; ++i){
		cin >> b[i];
	}

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			c += a[i][j] * b[j];
		}
		printf("%d\n", c);
		c = 0;
	}

	return 0;
}