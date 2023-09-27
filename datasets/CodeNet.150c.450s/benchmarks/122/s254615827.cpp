#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <queue>

using namespace std;

int main() {
	priority_queue<int> PQ;
	string com;
	int k;
	cin >> com;
	while (com != "end") {
		if (com == "insert") {
			cin >> k;
			PQ.push(k);
		}
		if (com == "extract") {
			cout << PQ.top() << endl;
			PQ.pop();
		}
		cin >> com;
	}
	return 0;
}