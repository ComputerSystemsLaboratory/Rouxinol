#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " " << x << "\n";
#define fo(i, n) for(i=0; i<n; i++)
#define Fo(i, k, n) for(i=k; i<n; i++)
#define endl "\n"
#define ll long long
#define vi vector<int>

// memset(arr, value, size);

vi v[100005];
int i, a, b, m, n, ans[100005];

int main() {
	cout << "Yes" << endl;
	queue<int> q;
	cin >> n >> m;
	fo(i, m) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	ans[1] = 1;
	q.push(1);
	while (q.size()) {
		a = q.front();
		q.pop();
		for (auto b : v[a]) {
			if (!ans[b]) {
				ans[b] = a;
				q.push(b);
			}
		}
	}

	Fo(i, 1, n) {
		cout << ans[i + 1] << endl;
	}

	return 0;
}