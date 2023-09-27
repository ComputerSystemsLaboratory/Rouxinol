#include <bits/stdc++.h>
using namespace std;

int main()
{
	int val;
	vector<int> st;
	while (cin >> val) {
		if (val) {
			st.push_back(val);
		}
		else {
			cout << st.back() << endl;
			st.pop_back();
		}
	}
	return 0;
}