#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	map<int, int> ut;
	string com;
	int k;
	while (cin >> com, com != "end") {
		if (com == "insert") {
			cin >> k;
			ut[k]++;
		}
		else {
			int res = ut.rbegin()->first;
			printf("%d\n", res);
			auto ite = ut.find(res);
			if (ite->second == 1) ut.erase(ite);
			else ut[res]--;
		}
	}
	return 0;
}