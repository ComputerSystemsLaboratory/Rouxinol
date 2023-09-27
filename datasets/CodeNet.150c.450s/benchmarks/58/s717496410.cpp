#include<iostream>
#include <climits>
#include<vector>
#include<numeric>
#include<algorithm>
#include<string>
#include<cmath>
#include<set>
#include<map>
#include<stack>
#include<queue>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	string s;
	getline(cin, s);
	vector<string> t;
	t.push_back("");
	REP(i, (int)s.size()) {
		if (s[i] == ' ') t.push_back("");
		else t[t.size()-1].push_back(s[i]);
	}
	stack<int> st;
	st.push(stoi(t[0]));
	st.push(stoi(t[1]));
	FOR(i, 2, (int)t.size()) {
		if (t[i] == "+") {
			int tmp = st.top();
			st.pop();
			tmp += st.top();
			st.pop();
			st.push(tmp);
		}
		else if (t[i] == "-") {
			int tmp = st.top();
			st.pop();
			tmp -= st.top();
			st.pop();
			st.push(-tmp);
		}
		else if (t[i] == "*") {
			int tmp = st.top();
			st.pop();
			tmp *= st.top();
			st.pop();
			st.push(tmp);
		}
		else st.push(stoi(t[i]));
	}
	cout << st.top() << "\n";

	return 0;
}
