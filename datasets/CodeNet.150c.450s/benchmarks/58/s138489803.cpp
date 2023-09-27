#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>

using namespace std;

int reversePoland(string s)
{
	stack<int> st;
	
	stringstream ss(s);
	string str;
	while (ss >> str)
	{
		int temp[2];
		if (str == "+")
		{
			for (auto i = 0; i < 2; ++i)
			{
				temp[i] = st.top();
				st.pop();
			}
			st.push(temp[0] + temp[1]);
		}
		else if (str == "-")
		{
			for (auto i = 0; i < 2; ++i)
			{
				temp[i] = st.top();
				st.pop();
			}
			st.push(temp[1] - temp[0]);
		}
		else if (str == "*")
		{
			for (auto i = 0; i < 2; ++i)
			{
				temp[i] = st.top();
				st.pop();
			}
			st.push(temp[0] * temp[1]);
		}
		else
		{
			st.push(stoi(str));
		}
	}

	return st.top();
}

int main()
{
	string s;
	getline(cin, s);

	cout << reversePoland(s) << endl;

	return 0;
}