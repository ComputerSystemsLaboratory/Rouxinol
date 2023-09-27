#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<utility>
#include<string>

using namespace std;

queue<pair<string, int>> tasks;

int main()
{
	cin.tie(0);
	ios::ios_base::sync_with_stdio(false);
	int taskam, q;
	cin >> taskam >> q;
	for (int i = 0; i < taskam; ++i) {
		string name;
		int thistask;
		cin >> name >> thistask;
		tasks.emplace(make_pair(name, thistask));
	}
	int time = 0;
	while (!tasks.empty()) {
		int tmpt = tasks.front().second;
		string tmpname = tasks.front().first;
		tasks.pop();
		int n = tmpt - q;
		if (n > 0) {
			tasks.emplace(make_pair(tmpname, n));
			time += q;
		}
		else {
			time += tmpt;
			cout << tmpname << " " << time << endl;
		}
	}
}