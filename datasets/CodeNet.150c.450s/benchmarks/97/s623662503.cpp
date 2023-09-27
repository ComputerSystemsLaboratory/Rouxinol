#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int dx[4] = { -1,0,1,0 }, dy[4] = { 0,-1,0,1 };

int main() {
	int N;
	while (cin >> N, N) {
		int xma = 0, xmi = 0, yma = 0, ymi = 0;
		vector<pair<int, int>>v;
		v.push_back(pair<int, int>(0, 0));
		for (int i = 0; i < N - 1; i++) {
			int n, d;
			cin >> n >> d;
			v.push_back(pair<int, int>(v[n].first + dx[d], v[n].second + dy[d]));
			xma = max(v[n].first + dx[d], xma); xmi = min(v[n].first + dx[d], xmi);
			yma = max(v[n].second + dy[d], yma); ymi = min(v[n].second + dy[d], ymi);
		}
		cout << xma - xmi + 1 << " " << yma - ymi + 1 << endl;
	}
}