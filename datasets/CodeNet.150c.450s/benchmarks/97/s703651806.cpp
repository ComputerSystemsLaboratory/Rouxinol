#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
	while (true) {
		int N;
		vector<pair<int, int> > s;
		pair<int, int> p;
		cin >> N;
		if (N == 0) {
			break;
		}
		p.first = p.second = 0;
		s.push_back(p);
		for (int i = 1; i < N; i++) {
			int dx[] = {-1, 0, 1, 0};
			int dy[] = {0, -1, 0, 1};
			int n, d;
			cin >> n >> d;
			int x = s[n].first + dx[d];
			int y = s[n].second + dy[d];
			p.first = x;
			p.second = y;
			s.push_back(p);
		}
		int xsize, ysize;
		int xmax = INT_MIN;
		int xmin = INT_MAX;
		int ymax = INT_MIN;
		int ymin = INT_MAX;
		for (int i = 0; i < N; i++) {
			//cout << s[i].first << " " << s[i].second << endl;
			xmax = max(xmax, s[i].first);
			xmin = min(xmin, s[i].first);
			ymax = max(ymax, s[i].second);
			ymin = min(ymin, s[i].second);
		}
		xsize = xmax - xmin + 1;
		ysize = ymax - ymin + 1;
		cout << xsize << " " << ysize << endl;
	}

	return 0;
}