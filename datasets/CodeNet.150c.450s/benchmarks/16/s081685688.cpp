#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
	string str;
	int area = 0;
	char c;
	getline(cin, str);
	stack <int> stk;
	stack <pair<int, int>> stk2;
	stack <int> stk3;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '\\')
		{
			stk.push(i);

		}
		else if (str[i] == '/')
		{
			if (stk.empty())continue;

			int temp = i - stk.top();
			area += temp;
			pair<int, int> p = make_pair(stk.top(), temp);
			if (stk2.empty())
			{
				stk2.push(p);
			}
			else
			{
				for (int l = i; l > p.first; l--)
				{
					if (stk2.empty())break;
					if (stk2.top().first == l)
					{
						p.second += stk2.top().second;
						stk2.pop();
					}
				}
				stk2.push(p);
			}
			stk.pop();
		}
	}

	cout << area << endl;
	int num = stk2.size();
	if (num != 0)
	{
		cout << num <<" ";
		for (int i = 0; i < num; i++)
		{
			pair <int, int> P = stk2.top();
			stk3.push(P.second);
			stk2.pop();
		}
		for (int i = 0; i < num; i++)
		{

			cout << stk3.top();
			if (i != num - 1)
			{
				cout << " ";
			}
			stk3.pop();
		}
	}
	else
	{
		cout << num;
	}

	cout << endl;
	return 0;
}