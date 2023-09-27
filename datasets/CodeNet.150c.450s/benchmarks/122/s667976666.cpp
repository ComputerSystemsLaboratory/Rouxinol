#include<iostream>
#include<queue>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
	int key;
	char c[10];
	priority_queue<int> q;

	while (1) {
		scanf("%s", c);
		if (c[0] == 'e' && c[1] == 'n') break;
		if (c[0] == 'i') {
			scanf("%d", &key);
			q.push(key);
		}
		else if (c[0] == 'e') {
			cout << q.top() << endl;
			q.pop();
		}
	}

	return 0;
}
