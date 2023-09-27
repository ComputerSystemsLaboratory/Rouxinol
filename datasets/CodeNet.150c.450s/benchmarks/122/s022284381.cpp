#include "bits/stdc++.h"
using namespace std;

string order;
priority_queue<int> Q;
int num;

int main() {
	while (order != "end") {
		cin >> order;
		if (order == "insert") {
			cin >>num;
			Q.push(num);
		}
		else if (order == "extract") {
			int cur = Q.top();
			Q.pop();
			cout << cur << endl;
		}
	}
	return 0;
}
