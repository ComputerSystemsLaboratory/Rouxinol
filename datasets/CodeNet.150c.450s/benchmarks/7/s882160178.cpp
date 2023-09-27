
/* vo01.cpp */
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	priority_queue<int> que;
	int h;

	for (int i = 0; i < 10; ++i) { cin >> h; que.push(h); }

	int c = 0;
	while (c < 3) {
		cout << que.top() << '\n'; que.pop();
		c++;
	}

	return 0;
}