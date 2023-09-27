#include<iostream>
#include<queue>
#include<string>
#include<utility>
using namespace std;

int main() {
	int n;
	int q;
	cin >> n >> q;

	string name;
	int time;
	queue<pair<string, int>> task;
	for (int i = 0; i < n; ++i) {
		cin >> name >> time;
		task.push(make_pair(name, time));
	}
	int t = 0;
	while (!task.empty()) {
		if (task.front().second > q) {
			t += q;
			task.front().second -= q;
			pair<string, int> tmp = task.front();
			task.pop();
			task.push(tmp);
		}
		else {
			t += task.front().second;
			cout << task.front().first << " " <<t<< endl;
			task.pop();
		}
	}

	return 0;
}
