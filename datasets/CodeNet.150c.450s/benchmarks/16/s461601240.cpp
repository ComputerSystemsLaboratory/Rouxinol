#include <iostream>
#include <stack>
#include<algorithm>
using namespace std;
int main() {
	stack<int> pos;
	stack< pair<int, int> > area;
	int sum = 0;
	char ch;
	for (int i = 0; cin >> ch; i++) {
		if (ch == '\\') {
			pos.push(i);
		}
		else if (ch == '/' && pos.size()>0) {
			int left = pos.top();
			pos.pop();
			int val = i - left;
			sum += val;
			pair<int, int> p(left, val);
			while (area.size() > 0 && area.top().first > p.first) {
				pair<int, int> child = area.top(); area.pop();
				p.second += child.second;
			}
			area.push(p);
		}
	}
	cout << sum << endl;
	int len = area.size();
	if (len == 0)
		cout << len;
	else
		cout << len << " ";
	int* arr = new int[len];
	for (int i = 0; area.size()>0; area.pop(), i++)
		arr[i] = area.top().second;
	for (int i = len - 1; i >= 0; i--) {
		if (i != len - 1)
			cout << " " << arr[i];
		else
			cout << arr[i];
	}
	cout << endl;
	return 0;
}
