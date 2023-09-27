#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
using namespace std;
const int num = 5000;
vector<int> v[num];
int cnt = -1;
inline void merge(int a, int b) {
		int m = -1, n = -1;
		for (int i = 0; i <= cnt; i++) {
			for (int j = 0; j < v[i].size(); j++) {
				if (m != -1 && n != -1) break;
				if (v[i][j] == a) m = i;
				if (v[i][j] == b) n = i; 
			}
			if (m != -1 && n != -1) break;
		}
		if (m != -1 && n != -1 && m != n) {
			int x = v[n].size();
			for (int i = 0; i < x; i++) {
				v[m].push_back(v[n][0]);
				v[n].erase(v[n].begin());
			}
		}
		else if (m != -1 && n != -1 && m == n) return;
		else if (m != -1 && n == -1) v[m].push_back(b);
		else if (m == -1 && n != -1) v[n].push_back(a); 
		else {
			cnt++;
			v[cnt].push_back(a);
			v[cnt].push_back(b);
		}
}
inline void same(int a, int b) {
	int m = -1, n = -1;
	for (int i = 0; i <= cnt; i++) {
		for (int j = 0; j < v[i].size(); j++) {
			if (m != -1 && n != -1) break;
			if (v[i][j] == a) m = i;
			if (v[i][j] == b)  n = i;
			if (m != -1 && n != -1) break;
		}
	}
	if (m != -1 && n != -1 && m == n) cout << '1' << endl;
	else cout << '0' << endl;
}

int main() {
	int n, q,com, fi , se;
	cin >> n >> q;
	for (int i = 0; i < q; i++) {
		cin >> com >> fi >> se;
		if (com == 0) merge(fi, se);
		else same(fi, se);
	}
	return 0;
}