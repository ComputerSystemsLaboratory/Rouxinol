#include <iostream>
#include <list>
#include <stack>

using namespace std;

int main() {
	list<int> stat;

	for (int i = 0, in; cin >> in; i++, stat.push_back(in));

	stack<int> stacK;
	for (list<int>::iterator it = stat.begin(); it != stat.end(); it++, it = stat.begin()) {
		if (*it == 0) {
			cout << stacK.top() << endl;
			stacK.pop();
		} else
			stacK.push(*it);
		stat.pop_front();
	}
}