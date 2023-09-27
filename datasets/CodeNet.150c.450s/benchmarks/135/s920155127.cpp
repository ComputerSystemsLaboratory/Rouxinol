#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,m;
	int h[1501] = {},w[1501] = {};
	vector<int> sum;
	while(1){
		cin >> n >> m;
		if(!n && !m) break;
		for(int i = 0;i < n;i++) {
			cin >> h[i + 1];
			h[i + 1] += h[i];
		}
		for(int i = 0;i < m;i++) {
			cin >> w[i + 1];
			w[i + 1] += w[i];
		}
		for(int i = 0;i <= n;i++){
			for(int j = i + 1;j <= n;j++){
				sum.push_back(h[j] - h[i]);
			}
		}
		sort(sum.begin(),sum.end());
		int cnt = 0;
		for(int i = 0;i <= m;i++){
			for(int j = i + 1;j <= m;j++){
				cnt += upper_bound(sum.begin(),sum.end(),w[j] - w[i]) - lower_bound(sum.begin(),sum.end(),w[j] - w[i]);
			}
		}
		cout << cnt << endl;
		sum.clear();
	}
	return 0;
}