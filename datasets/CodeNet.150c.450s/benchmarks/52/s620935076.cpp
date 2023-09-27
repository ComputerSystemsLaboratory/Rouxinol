#include "bits/stdc++.h"
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	stack<int> st;
	int x;
	while (cin >> x) {
		if (x == 0) {
			cout << st.top() << endl; st.pop();
		}
		else st.push(x);
	}
}