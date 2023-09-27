#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

const int INF = 1 << 29;

vector<int> a;
vector<int> memo1(1000005, -1);
vector<int> memo2(1000005, -1);

int dfs1(int s)
{
	if(s == 0) return 0;

	if(memo1[s] != -1) {
		return memo1[s];
	}

	int res = INF;

	for(int i = a.size() - 1; i >= 0; --i) {
		if(s - a[i] >= 0) {
			res = min(res, dfs1(s - a[i]) + 1);
		}
	}

	return memo1[s] = res;
}

int dfs2(int s)
{
	if(s == 0) return 0;

	if(memo2[s] != -1) {
		return memo2[s];
	}

	int res = INF;

	for(int i = a.size() - 1; i >= 0; --i) {
		if(s - a[i] >= 0 && (a[i] & 1)) {
			res = min(res, dfs2(s - a[i]) + 1);
		}
	}

	return memo2[s] = res;
}

int main()
{
	int n;

	for(int i = 1; i * (i + 1) * (i + 2) / 6 < 1000004; ++i) {
		a.push_back(i * (i + 1) * (i + 2) / 6);
	}

	//cout << a.size() << endl;

	while(cin >> n, n) {
		cout << dfs1(n) << ' ' << dfs2(n) << endl;
	}
}