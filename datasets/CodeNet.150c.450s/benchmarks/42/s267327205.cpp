#include <algorithm>
#include <iostream>
#include <math.h>
#include <stack>
#include <stdio.h>
#include <string>
#include <queue>
#include <vector>
using namespace std;

struct Ope {
	string name;
	int time;
};

int main()
{
	Ope c;
	queue<Ope> que;
	int n, q, total = 0;
	cin >> n >> q;

	for (int i = 0; i < n; i++) {
		cin >> c.name >> c.time;
		que.push(c);
	}

	while (true) {
		if (que.size() == 0) break;
		c = que.front(); que.pop();
		if (c.time - q < 1) {
			total += c.time;
			cout << c.name << " " << total << "\n";
		}
		else {
			c.time -= q;
			que.push(c);
			total += q;
		}
	}
}
