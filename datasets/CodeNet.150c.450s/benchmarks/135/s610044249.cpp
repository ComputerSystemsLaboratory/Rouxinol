#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;

int exist[1500001];

int main() {
	int n, m;
	while(cin >> n >> m, n||m) {
		memset( exist, 0, sizeof(exist) );
		int h[n], w[m];
		for(int i=0; i<n; i++) {
		   	cin >> h[i];
		}
		for(int i=0; i<m; i++) {
		   	cin >> w[i];
		}
		rep(i,n) {
			int sum = h[i];
			exist[sum]++;
			for(int j=i+1; j<n; j++) {
				sum += h[j];
				exist[sum]++;
			}
		}
		int cnt = 0;
		rep(i,m) {
			int sum = w[i];
			cnt += exist[sum];
			for(int j=i+1; j<m; j++) {
				sum += w[j];
				cnt += exist[sum];
			}
		}
		cout << cnt << endl;
	}
	return 0;
}