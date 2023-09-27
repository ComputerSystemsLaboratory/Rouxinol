#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, m;
	while (cin >> n >> m, n){
		vector<int> h(n), w(m);
		for (auto &i : h) cin >> i;
		for (auto &i : w) cin >> i;
		vector<int> hl(n*1000), wl(m*1000);
		for (int i = 0; i < n; i++){
			int sum = 0;
			for (int j = i; j < n; j++){
				sum += h[j];
				hl[sum]++;
			}
		}
		for (int i = 0; i < m; i++){
			int sum = 0;
			for (int j = i; j < m; j++){
				sum += w[j];
				wl[sum]++;
			}
		}
		int ret = 0;
		for (int i = 0; i < min(n, m)*1000; i++){
			ret += hl[i] * wl[i];
		}
		cout << ret << endl;
	}
	return 0;
}