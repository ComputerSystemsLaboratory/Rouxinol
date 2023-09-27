#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int, int> P;

int main() {
	int h, w;
	vector<pair<int, P>> v;
	for (int i = 1; i <= 701; i++) {
		for (int j = i + 1; j <= 701; j++) {
			v.push_back(make_pair(i*i + j*j, P(i, j)));
		}
	}
	sort(v.begin(), v.end());
	while (cin >> h >> w, h, w) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i].second == P(h, w)) {
				cout << v[i + 1].second.first << ' ' << v[i + 1].second.second << endl;
				break;
			}
		}
	}
	return 0;
}