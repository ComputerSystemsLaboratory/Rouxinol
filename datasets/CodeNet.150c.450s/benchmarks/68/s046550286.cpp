#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)
#define INF 1000000000

int main()
{
	int n;
	while (cin >> n, n) {
		vector<int> a;
		REP(i, 0, n) {
			int in;
			cin >> in;
			a.push_back(in);
		}

		sort(a.begin(), a.end());
		int ans = INF;
		REP(i, 0, a.size() - 1) {
			ans = min(ans, a[i + 1] - a[i]);
		}

		cout << ans << endl;
	}
	return 0;
}