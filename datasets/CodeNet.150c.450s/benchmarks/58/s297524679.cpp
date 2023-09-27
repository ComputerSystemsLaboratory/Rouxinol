#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)

stack<int> s;
int a,b;

void op() {
	a = s.top();
	s.pop();
	b = s.top();
	s.pop();
}

int main() {
	string w;
	while (cin >> w) {
		if(w == "+") {
			op();
			s.push(a + b);
		} else if (w == "-") {
			op();
			s.push(b - a);
		} else if (w == "*") {
			op();
			s.push(b * a);
		} else {
			s.push(atoi(w.c_str()));
		}
	}
	cout << s.top() << endl;
	return 0;
}