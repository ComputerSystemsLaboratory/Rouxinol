#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
const int num = 100001;
vector<int> v[num];
int n;
int co[num];
inline void dfs(int t, int c) {
	stack<int> st;
	st.push(t);
	co[t] = c;
	while (!st.empty()) {
		int u = st.top(); st.pop();
		for (int i = 0; i < v[u].size(); i++) {
			int g = v[u][i];
			if (co[g] == 0) {
				co[g] = c;
				st.push(g);
			}
		}
	}
}
int main() {
	int m, s, t, q, id = 0, a, b;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		co[i] = 0;
	for (int i = 0; i < m; i++) {
		cin >> s >> t;
		v[s].push_back(t);
		v[t].push_back(s);
	}
	for (int i = 0; i < n; i++) {
		if (co[i] == 0) {
			id++;
			dfs(i, id);
		}
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> a >> b;
		if (co[a] == co[b])
			cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}