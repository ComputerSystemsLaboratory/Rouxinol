#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	priority_queue<int> q;
	char op[20];
	int k;
	while (scanf("%s", op) != EOF&&op[2] != 'd') {
		if (op[0] == 'i') {
			scanf("%d", &k);
			q.push(k);
		}
		else {
			int k = q.top();
			q.pop();
			printf("%d\n", k);
		}
	}
	return 0;
}