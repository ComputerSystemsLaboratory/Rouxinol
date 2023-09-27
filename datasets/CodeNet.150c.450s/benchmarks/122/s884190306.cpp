#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.sync_with_stdio(false);
	string S;
	int val;
	priority_queue<int> pq;
	while (cin >> S, S != "end") {
		if (S == "extract") {
			printf("%d\n", pq.top());
			pq.pop();
		}
		else {
			cin >> val;
			pq.push(val);
		}
	}
	return 0;
}