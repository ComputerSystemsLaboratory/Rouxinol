#include <iostream>
#include <stack>

using namespace std;

int main ()
{
	stack<int> st;
	int a;

	while ( cin >> a ) {
		if (a == 0) {
			cout << st.top() << endl;
			st.pop();
		} else {
			st.push(a);
		}
	}
	return 0;
}


