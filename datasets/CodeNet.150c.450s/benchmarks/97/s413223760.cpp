#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	while(cin >> n, n){
		vector< pair<int, int> >v;
		v.push_back(make_pair(0, 0));
		int minx = 0;
		int maxx = 0;
		int miny = 0;
		int maxy = 0;
		for(int i = 1; i < n; i++){
			int p, q; cin >> p >> q;
			if (q == 0) v.push_back(make_pair(v[p].first - 1, v[p].second));
			else if (q == 1) v.push_back(make_pair(v[p].first, v[p].second - 1));
			else if (q == 2) v.push_back(make_pair(v[p].first + 1, v[p].second));
			else if (q == 3) v.push_back(make_pair(v[p].first, v[p].second + 1));
			minx = min(minx, v[i].first);
			maxx = max(maxx, v[i].first);
			miny = min(miny, v[i].second);
			maxy = max(maxy, v[i].second);
		}
		cout << maxx - minx + 1 << ' ' << maxy - miny + 1 << endl;
	}
	return 0;
}