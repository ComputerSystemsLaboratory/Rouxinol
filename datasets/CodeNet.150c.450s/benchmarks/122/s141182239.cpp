#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main() {
	long long k;
	priority_queue<int> s;
	string ope;

	while (1) {
		cin >> ope;
		if (ope == "end") break;
		else if (ope == "insert") {
			cin >> k;
			s.push(k);
		}
		else if (ope == "extract") {
			cout << s.top() << endl;
			s.pop();
		}
	}

	return 0;
}