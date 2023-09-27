#include<iostream>
#include<vector>
#include<string>
#include<map>
#define int long long
using namespace std;

signed main() {
	int a;
	while (cin >> a, a) {
		vector<vector<int>>b(a);
		int n = 0;
		for (int c = 0; c < a; c++) {
			vector<int>d(3);
			cin >> d[0] >> d[1] >> d[2];
			if (d[1] > n)n = d[1];
			if (d[0] > n)n = d[0];
			b[c] = d;
		}
		n++;
		vector<vector<int>>miti(n, vector<int>(n, 1000000));
		for (int e = 0; e < a; e++) {
			miti[b[e][0]][b[e][1]] = miti[b[e][1]][b[e][0]] = b[e][2];
		}
		for (int f = 0; f < n; f++) {
			for (int g = 0; g < n; g++) {
				for (int h = 0; h < n; h++) {
					if (g == h)miti[g][h] = 0;
					else miti[g][h] = (miti[g][h]<miti[g][f] + miti[f][h]) ? (miti[g][h]) : (miti[g][f] + miti[f][h]);
				}
			}
		}
		map<int, int>l;
		int o = 0;
		for (auto n : miti) {
			int s = 0;
			for (int m : n)s += m;
			l.insert(pair<int, int>(s, o));
			o++;
		}
		auto t = l.begin();
		cout << t->second << " " << t->first << endl;
	}
}