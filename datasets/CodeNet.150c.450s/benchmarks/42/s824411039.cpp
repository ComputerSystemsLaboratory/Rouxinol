#include<iostream>
#include<queue>
#include<string>
using namespace std;

//class node {
//public:
//	string name;
//	int time;
//};

int main() {
	queue<pair<string, int>> qu;
	int numNode;
	int qwon;

	cin >> numNode >> qwon;
	for (int i = 0; i < numNode; i++) {
		string name;
		int time;
		cin >> name >> time;
		qu.push(make_pair(name, time));
	}

	int elaps = 0;
	while (!qu.empty()) {
		pair<string, int> q = qu.front();
		qu.pop();
		int t = q.second < qwon ? q.second : qwon;
		q.second -= t;
		elaps += t;

		if (q.second > 0) {
			qu.push(q);
		}
		else {
			cout << q.first << " " << elaps << endl;
		}
	}
	return 0;
}