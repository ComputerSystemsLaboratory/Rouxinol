#include<iostream>
#include<stack>
#include<string>

using namespace std;

class m
{
public:
	int start;
	int mizu;
};

int main()
{
	stack<int> s1;
	stack<m> s2, s3;
	m a;
	int all = 0, i, j;
	string s;
	cin >> s;
	for (i = 0; i < (int)s.length(); i++)
	{
		if (s.substr(i, 1) == "\\")
		{
			s1.push(i);
		}
		else if (s.substr(i, 1) == "/")
		{
			if (s1.size() == 0)continue;
			all += i - s1.top();
			if (s2.size() == 0)
			{
				a.start = s1.top();
				a.mizu = i - s1.top();
				s2.push(a);
			}
			else
			{
				a.start = s1.top();
				a.mizu = 0;
				while (s2.size() != 0 && s2.top().start > s1.top())
				{
					a.mizu += s2.top().mizu;
					s2.pop();
				}
				a.mizu += i - s1.top();
				s2.push(a);
			}
			s1.pop();
		}
	}
	cout << all << endl << s2.size();
	j = (int)s2.size();
	for (i = 0; i < j; i++)
	{
		s3.push(s2.top());
		s2.pop();
	}
	for (i = 0; i < j; i++)
	{
		cout << " " << s3.top().mizu;
		s3.pop();
	}
	cout << endl;
    return 0;
}