#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n, p;
	while (cin >> n >> p && n) {
		vector<int> line(n, 0);
		int hn = 0;
		for (int i = 0; i < n; ++i) {
			line[i] = p / n + (p%n > i ? 1 : 0);
			if (line[i])++hn;
		}
		int place = p % n;
		p = 0;
		while (true) {
			if (p == 0) {
				if (line[place])--hn;
				p = line[place];
				line[place] = 0;
			}
			else {
				if (line[place] == 0)++hn;
				++line[place];
				--p;
			}
			if (p == 0 && hn == 1) {
				cout << place << endl;
				break;
			}
			place = (place + 1) % n;
		}
	}
	return 0;
}
