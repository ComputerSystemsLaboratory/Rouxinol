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

int main(void)
{
	int n, m;
	while (cin >> n >> m, n && m){
		for (int i = 0; i < n; i++){
			cin >> h[i];
		}
		for (int i = 0; i < m; i++){
			cin >> w[i];
		}

		map <int, int> hdata, wdata;

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

		/*
		puts("**debug**");
		for (int i = 0; i < n*m; i++){
			cout << i << " " << hdata[i] << " " << wdata[i] << endl;
		}
		*/

		int ret = 0;
		map <int, int>::iterator hit = hdata.begin(), wit = wdata.begin();
		while (hit != hdata.end() && wit != wdata.end()){
			if (hit->first == wit->first){
				ret += hit->second * wit->second;
				hit++;
				wit++;
			}
			else if (hit->first < wit->first){
				hit++;
			}
			else {
				wit++;
			}
		}

		cout << ret << endl;

	}
}