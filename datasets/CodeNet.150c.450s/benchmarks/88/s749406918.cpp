#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

typedef pair<int,pair<int, int> > P;

int main() {

	while (1) {
		

		int h, w;
		vector<P> pos;
		cin >> h >> w;

		if (h == 0)break;

		int X = pow(h, 2) + pow(w, 2);
		//cout << X << endl;

		
		for (int i = 1; i <= 150; i++) {
			for (int j=i+1; j <= 150; j++) {
				int x = pow(i, 2) + pow(j, 2);
				if (x > X) {
					//cout << i << ' ' << j << ' ' << x << endl;
					pos.push_back(make_pair(x, make_pair(i, j)));
				}
				else if (x == X && i > h) {
					pos.push_back(make_pair(x, make_pair(i, j)));
				}
			}
		}

		int n = 10000, m, minx=pow(X,2);
		for (int i = 0; i < pos.size(); i++) {
			if (pos[i].first < minx) {
				minx = pos[i].first;
				n = pos[i].second.first;
				m = pos[i].second.second;
			}
			else if (pos[i].first == minx && pos[i].second.first < n) {
				minx = pos[i].first;
				n = pos[i].second.first;
				m = pos[i].second.second;
			}
		}

		cout << n << ' ' << m << endl;
	}
	return 0;
}