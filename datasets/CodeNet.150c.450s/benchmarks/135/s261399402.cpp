/*
3 3
1 1 4
2 3 1
連続したものの和と同じものがあるとうれしい

*/

#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int h[1600], w[1600];
int hdata[1500*1000 + 100];
int wdata[1500*1000 + 100];

int main(void)
{
	int n, m;
	while (cin >> n >> m, n && m){
		fill(hdata, hdata + 1500*1000+100, 0);
		fill(wdata, wdata + 1500*1000+100, 0);
		
		for (int i = 0; i < n; i++){
			cin >> h[i];
		}
		for (int i = 0; i < m; i++){
			cin >> w[i];
		}

		int sum = 0;
		for (int i = 0; i < n; i++){
			sum += h[i];
			int tmp = sum;
			for (int j = 0; j <= i; j++){
				hdata[tmp]++;
				tmp -= h[j];
			}
		}
		sum = 0;
		for (int i = 0; i < m; i++){
			sum += w[i];
			int tmp = sum;
			for (int j = 0; j <= i; j++){
				wdata[tmp]++;
				tmp -= w[j];
			}
		}

		int ret = 0;
		for (int i = 0; i <= 1500*1000; i++){
			ret += wdata[i] * hdata[i];
		}

		cout << ret << endl;
	}

	return 0;
}