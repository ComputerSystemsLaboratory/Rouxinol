#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 int main() {
	for(int N, M; cin >> N >> M && N; ) {
		vector<pair<int, int>> roads;
		
		int danger = 0;
		
		for(int i = 0; i < N; i++) {
			int d, p;
			cin >> d >> p;
			
			roads.push_back(make_pair(p, d));
			danger += d * p;
		}
		
		sort(roads.begin(), roads.end(), greater<pair<int, int>>());
		
		for(int i = 0; i < N; i++) {
			danger -= min(M, roads[i].second) * roads[i].first;
			M = max(M - roads[i].second, 0);
		}
		
		cout << danger << endl;
	 }
 }