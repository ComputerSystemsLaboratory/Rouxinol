#include <iostream>
#include <string>
#include <stack>
#include <list>

using namespace std;

int main() {
	string area;
	cin >> area;

	int len = area.size(), sum = 0;

	stack<int> st1;
	list<pair<int, int> > lst;

	for (int i = 0; i < len; i++) {
		if (area[i] == '\\') {
			st1.push(i);
		}
		else if (area[i] == '/' && !st1.empty()) {
			int j = st1.top();
			st1.pop();

			sum += (i - j);

			int temp = i - j;
			while (!lst.empty() && lst.front().second > j) {
				temp += lst.front().first;
				lst.pop_front();
			}
			lst.push_front(make_pair(temp, j));
		}
	}

	cout << sum << endl;
	int size = lst.size();
	cout << size;
	for (int i = 0; i < size; i++) {
		cout << " " << lst.back().first;
		lst.pop_back();
	}
	cout << endl;

	return 0;
}