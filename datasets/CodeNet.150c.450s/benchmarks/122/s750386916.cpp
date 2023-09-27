#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	priority_queue<int> pq;

	while (1) {
		string com;
		cin >> com;

		if (com[0] == 'i') {
			int key;
			cin >> key;
			pq.push(key);
		}
		else if (com[1] == 'x') {
			cout << pq.top() << endl;
			pq.pop();
		}
		else
			break;
	}

	return 0;
}