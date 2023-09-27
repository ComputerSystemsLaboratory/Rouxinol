#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	while (cin >> n, n) {
		vector<pair<int, int> > v;
		for (int i = 0; i < n; i++) {
			int x, y; cin >> x >> y;
			v.push_back(make_pair(x, y));
		}
		cin >> n;
		int x = 10, y = 10;
		for (int i = 0; i < n; i++) {
			char c; int l; cin >> c >> l;
			for (int j = 0; j < l; j++) {
				if (c == 'E') x++;
				else if (c == 'W')x--;
				else if (c == 'N')y++;
				else if (c == 'S')y--;
				auto itr = std::find(v.begin(), v.end(), make_pair(x, y));
				if (itr != v.end())v.erase(itr);
			}
		}
		if (v.size() == 0)cout << "Yes\n";
		else cout << "No\n";
	}
}