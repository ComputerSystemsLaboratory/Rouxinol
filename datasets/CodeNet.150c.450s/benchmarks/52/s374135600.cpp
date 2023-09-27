#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> st;

	int n;
	while (cin >> n)
	{
		if (n == 0)
		{
			cout << st.top() << endl;
			st.pop();
			continue;
		}

		st.push(n);
	}

	return 0;
}