#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

typedef struct qq {
	string name;
	int time;
}p;

int main() {
	int n, q;
	cin >> n >> q;
	queue<p> que;
	string na;
	int ti;
	for (int i = 0; i < n; ++i) {
		cin >> na >> ti;
		que.push({ na,ti });
	}
	int sec = 0;
	while (!que.empty()) {
		int c = min(que.front().time, q);
		que.front().time -= c;
		sec += c;
		if (que.front().time > 0) que.push(que.front());
		else cout << que.front().name << " " << sec << endl;
		que.pop();
	}

	return 0;
}
