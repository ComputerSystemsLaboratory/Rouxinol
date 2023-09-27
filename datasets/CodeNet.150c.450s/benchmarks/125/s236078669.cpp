#include <iostream>
#include <vector>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_B

vector<int> map[100];
int found[100];
int finish[100];
bool visit[100];

int dfs(int x, int t) {
	found[x] = t;
	visit[x] = true;
	for (int i = 0; i < map[x].size(); i++) {
		if (visit[map[x][i]]) continue;
		t = dfs(map[x][i], t + 1);
	}
	finish[x] = ++t;
	return t;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> c;
		for (int j = 0; j < c; j++) {
			cin >> b;
			map[a - 1].push_back(b - 1);
		}
	}
	
	int t = 1;
	for (int i = 0; i < n; i++) 
		if (!visit[i]) t = dfs(i, t) + 1;
	
	for (int i = 0; i < n; i++)
		cout << (i + 1) << " " << found[i] << " " << finish[i] << endl;
	return 0;
}