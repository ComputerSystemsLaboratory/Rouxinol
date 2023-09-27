#include <bits/stdc++.h>

using namespace std;

bool dfs(queue<int> a, stack<int> b, stack<int> c)
{
	if (a.empty()) return true;

	bool f1 = false, f2 = false;

	int item = a.front(); a.pop();

	if (b.top() < item) {
		b.push(item);
		f1 = dfs(a, b, c);
		b.pop();
	}

	if (c.top() < item) {
		c.push(item);
		f2 = dfs(a, b, c);
		c.pop();
	}

	return f1 || f2;
}

int main()
{
	int n; cin >> n;

	while (n--) {
		queue<int> a;
		stack<int> b, c;

		b.push(0);
		c.push(0);

		for (int i = 0; i < 10; ++i) { int v; cin >> v; a.push(v); }

		cout << (dfs(a, b, c) ? "YES" : "NO") << endl;
	}
}