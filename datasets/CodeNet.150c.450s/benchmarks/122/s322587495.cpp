#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s;
	priority_queue<int> pq;
	while (cin >> s, s != "end") {
		if (s == "insert") {
			cin >> n;
			pq.push(n);
		}
		else {
			cout << pq.top() << endl;
			pq.pop();
		}
	}
	return 0;
}