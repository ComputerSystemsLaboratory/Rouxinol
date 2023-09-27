#include <bits/stdc++.h>
using namespace std;

struct S { int bg, ed, ar; };

int main()
{
	string s;
	cin >> s;
	
	stack<int> st;
	vector<S> v;
	
	bool f = false;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == '\\'){
			st.push(i);
		}
		if (s[i] == '/'){
			if (st.empty()) continue;
			int ar = i - st.top();
			while (!v.empty() && st.top() < v.back().bg){
				ar += v.back().ar;
				v.pop_back();
			}
			v.push_back({st.top(), i, ar});
			st.pop();
		}
	}
	
	int area = 0;
	for (S &a : v) area += a.ar;
	cout << area << endl;
	
	cout << v.size();
	for (S &a : v) cout << " " << a.ar;
	cout << endl;
}