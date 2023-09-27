#include <iostream>

using namespace std;

int main( void )
{
	int n;
	int map[101];
	unsigned long long sum[101][21];
	while(cin >> n) {
		int MAX = 0;
		for(int i=0; i < 101; ++i) {
			for(int j=0; j < 21; ++j) {
				sum[i][j] = 0;
			}
		}
		--n;
		for(int i=0; i < n; ++i) {
			cin >> map[i];
		}
		cin >> MAX;
		sum[1][map[0]] = 1;
		for(int i=1; i < n; ++i) {
			for(int j=0; j < 21; ++j) {
				if(sum[i][j]) {
					int a = j + map[i];
					int b = j - map[i];
					if(0 <= a && a <= 20) {
						sum[i+1][a] += sum[i][j];
					}
					if(0 <= b && b <= 20) {
						sum[i+1][b] += sum[i][j];
					}
				}
			}
		}

		cout << sum[n][MAX] << endl;
	}
	return 0;
}