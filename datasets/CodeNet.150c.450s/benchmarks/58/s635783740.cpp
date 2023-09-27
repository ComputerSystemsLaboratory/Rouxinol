#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	stack<int>s;
	string t; getline(cin, t);
	string k;
	for (char c : t) {
		if (c == ' ') {
			if (!k.empty())s.push(stoi(k));
			k = ""; continue;
		}
		if (c == '+') {
			int a = s.top(); s.pop();
			int b = s.top(); s.pop();
			s.push(a + b);
		}
		else if (c == '-') {
			int a = s.top(); s.pop();
			int b = s.top(); s.pop();
			s.push(b - a);
		}
		else if (c == '*') {
			int a = s.top(); s.pop();
			int b = s.top(); s.pop();
			s.push(a*b);
		}
		else k += c;
	}
	cout << s.top() << endl;
}