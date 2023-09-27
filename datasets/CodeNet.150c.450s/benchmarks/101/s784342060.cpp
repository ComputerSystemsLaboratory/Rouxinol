

#include<iostream>
#include<vector>
#include<stack>

using namespace std;


static const int MAX = 100'000;
static const int nil = -1;

int n;
vector<int> grp[MAX];
int color[MAX];



void dfs(int r, int c) {
	stack<int> stk;
	stk.push(r);
	color[r] = c;

	while (!stk.empty())
	{
		int u = stk.top();stk.pop();

;		for (int i = 0; i < grp[u].size(); i++)
		{
			int v = grp[u][i];
			if (color[v] == nil) {
				color[v] = c;
				stk.push(v);
			}
		}
	}
}

void assignColor() {
	int id = 1;
	for (int i = 0; i < n; i++) color[i] = nil;
	for (int u = 0; u < n; u++)
	{
		if (color[u] == nil) dfs(u, id++);
	}
}

int main() {



	int s, t, m, q;

	cin >> n >> m;

	for (int i = 0;i < m;i++) {
		cin >> s >> t;
		grp[s].push_back(t);
		grp[t].push_back(s);
	}

	assignColor();

	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> s >> t;
		if (color[s] == color[t]) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}


	return 0;
}




