#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	priority_queue<int> que;
	string com;
	int v;

	while (1) {
		cin >> com;
		if (com == "insert") {
			cin >> v;
			que.push(v);
		}
		else if (com == "extract") {
			cout << que.top() << endl;
			que.pop();
		}
		else {
			break;
		}
	}

	return 0;
}