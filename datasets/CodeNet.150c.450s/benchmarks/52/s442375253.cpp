#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int x;
	stack<int> st;
	for (int n; cin >> n;) {
		if (n) {
			st.push(n);
		}
		else {
			cout << st.top() << endl;
			st.pop();
		}
	}
    return 0;
}