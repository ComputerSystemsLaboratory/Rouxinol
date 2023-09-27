#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	priority_queue<int> que;

	while (1) {
		char cmd[8] = "\0";
		int key;
		cin >> cmd;
		if (cmd[2] == 'd') break;
		if (cmd[2] == 's') {
			cin >> key;
			que.push(key);
		}
		else if (cmd[2] == 't') {
			cout << que.top() << endl;
			que.pop();
		}
	}
	return 0;
}