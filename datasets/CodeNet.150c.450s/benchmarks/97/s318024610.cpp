#include "bits/stdc++.h"
#pragma warning(disable:4996)
using namespace std;



const int dx[4] = { -1,0,1,0 };
const int dy[4] = { 0,1,0,-1 };
int main() {
	while (1) {
		int N; cin >> N;
		if (!N)break;
		vector<int>xs;
		vector<int>ys;
		xs.emplace_back(0);
		ys.emplace_back(0);
		for (int i = 0; i < N - 1; ++i) {
			int n, d; cin >> n >> d;
			const int nx = xs[n] + dx[d];
			const int ny = ys[n] + dy[d];
			xs.emplace_back(nx);
			ys.emplace_back(ny);
		}
		const int width = *(max_element(xs.begin(), xs.end())) - *(min_element(xs.begin(), xs.end()));
		const int height = *(max_element(ys.begin(), ys.end())) - *(min_element(ys.begin(), ys.end()));
		cout << width+1 << " " << height+1 << endl;
	}
	return 0;
}