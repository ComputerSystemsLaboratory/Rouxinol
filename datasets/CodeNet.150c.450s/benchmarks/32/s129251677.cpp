#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a, b, c, d[10000];
vector<pair<int, int> >P;
int main() {
	while (true) {
		cin >> a >> b >> c; P.clear();
		if (a == 0)break;
		for (int i = 1; i <= a; i++)cin >> d[i];
		for (int i = b; i <= c; i++) {
			P.push_back(make_pair(d[i] - d[i + 1], i));
		}
		sort(P.begin(), P.end());
		cout << P[P.size() - 1].second << endl;
	}
	return 0;
}