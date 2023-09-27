#include <bits/stdc++.h>

using namespace std;

vector<int> a;
stack<int> b, c;

bool dfs(int i)
{
	if (i == 10) return true;

	bool res1 = false, res2 = false;

    if (b.empty() || b.top() < a[i]) {
        b.push(a[i]);
        res1 = dfs(i + 1);
        b.pop();
    }

    if (c.empty() || c.top() < a[i]) {
        c.push(a[i]);
        res2 = dfs(i + 1);
        c.pop();
    }

	return res1 || res2;
}

int main()
{
	int n; cin >> n;

	while (n--) {
		a.clear();
		while (b.size()) b.pop();
		while (c.size()) c.pop();

        for (int i = 0; i < 10; ++i) { int v; cin >> v; a.push_back(v); }

		if (dfs(0)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}