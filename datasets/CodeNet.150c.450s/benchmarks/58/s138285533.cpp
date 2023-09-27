#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define vint vector<int>
#define vdouble vector<double>
#define vstring vector<string>
using namespace std;

#include<map>
#include<set>
#include<queue>

#include <stack>
typedef long long ll;
typedef unsigned long long ull;

// size, top, pop, push, empty

int main() {

	stack<string> st;
	string str;

	while (cin >> str) {

		if (str == "+"){
			ll i2 = stoll(st.top()); st.pop();
			ll i1 = stoll(st.top()); st.pop();
			st.push(to_string(i1 + i2));
		}
		else if (str == "-"){
			ll i2 = stoll(st.top()); st.pop();
			ll i1 = stoll(st.top()); st.pop();
			st.push(to_string(i1 - i2));
		}
		else if (str == "*"){
			ll i2 = stoll(st.top()); st.pop();
			ll i1 = stoll(st.top()); st.pop();
			st.push(to_string(i1 * i2));
		}
		else{
			st.push(str);
		}
	}

	cout << st.top() << endl;
}