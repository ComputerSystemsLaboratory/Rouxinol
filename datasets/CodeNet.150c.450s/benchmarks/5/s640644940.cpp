#include<iostream>
#include<stack>
using namespace std;

int main() {
	int n, tmp;
	stack<int> s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		s.push(tmp);
	}
	for (int i = 0; i < n; i++) {
		cout << s.top();
		if (i != n - 1)cout << " ";
		else cout << endl;
		s.pop();
	}
	return 0;
}