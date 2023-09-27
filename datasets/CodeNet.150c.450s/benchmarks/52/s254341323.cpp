#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <stack>

using namespace std;

int main() {

	stack<int> st;
	int a, ans[100]={0},i = 0;

	while (cin >> a) {
		if (a == 0) {
			cout << st.top() << endl;
			st.pop();
		}
		else {
			st.push(a);
		}
	}

	
	return 0;
}