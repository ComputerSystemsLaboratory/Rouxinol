
#include <iostream>
#include <stack>
using namespace std;
int v[20000];
int main() {
	stack<int> s;
	stack<pair<int, int> > t;
	char ch;
	int sum = 0, a;
	for (int i = 0; cin >> ch; i++) {
		if (ch == '\\')
			s.push(i);
		else if (ch == '/' && s.size() > 0) {
			int j = s.top(); s.pop();
			sum += i - j;
			a = i - j;
			while (t.size() > 0 && j < t.top().first) {
				a += t.top().second; t.pop();
			}
			t.push(make_pair(j, a));
		}
	}
	cout << sum << endl;
	cout << t.size();
	for (int i = t.size() - 1; i >= 0; i--) {
		v[i] = t.top().second;
		t.pop();
	}
	for (int i = 0; v[i] != 0; i++) {
		 cout << " ";
		cout << v[i];
	}
	cout << endl;
	return 0;
}