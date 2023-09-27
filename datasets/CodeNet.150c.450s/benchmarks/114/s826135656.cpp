#include<iostream>
#include<algorithm>
#include<queue>
#include<utility>
#include<vector>

using namespace std;



int main() {
	int n,tmp;
	cin >> n;
	pair<int, pair<int, int>>* sorted_weight = new pair<int, pair<int, int>>[n * n];
	int* equiv = new int[n];


	int cnt_equiv = 0;
	int cnt_edge = 0;
	int cost = 0;
	
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> tmp;
			sorted_weight[i * n + j] = make_pair(tmp, make_pair(i, j));
		}
		equiv[i] = 0;
	}
	sort(sorted_weight, sorted_weight + n * n);
	for (int i = upper_bound(sorted_weight, sorted_weight + n * n, make_pair(-1, make_pair(n, n))) - sorted_weight;cnt_edge<n-1;i++) {
		if (equiv[sorted_weight[i].second.second] == 0 || equiv[sorted_weight[i].second.first] == 0) {
			cnt_edge++;
			cost += sorted_weight[i].first;
			if (equiv[sorted_weight[i].second.second] == 0 && equiv[sorted_weight[i].second.first] == 0) {
				cnt_equiv++;
				equiv[sorted_weight[i].second.second] = equiv[sorted_weight[i].second.first] = cnt_equiv;
			}
			else if (equiv[sorted_weight[i].second.second] == 0) {
				equiv[sorted_weight[i].second.second] = equiv[sorted_weight[i].second.first];
			}
			else {
				equiv[sorted_weight[i].second.first] = equiv[sorted_weight[i].second.second];
			}
		}
		else if (equiv[sorted_weight[i].second.second] != equiv[sorted_weight[i].second.first]) {
			cnt_edge++;
			cost += sorted_weight[i].first;
			tmp = equiv[sorted_weight[i].second.second];
			for (int j = 0;j < n;j++) {
				if (equiv[j] == tmp)equiv[j] = equiv[sorted_weight[i].second.first];
			}
		}
	}
	
	cout << cost << endl;
}

