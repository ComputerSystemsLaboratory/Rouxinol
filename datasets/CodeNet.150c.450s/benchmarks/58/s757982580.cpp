#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
#include <string>
#include <stack>

#define INT_MAX 2147483647
#define INT_MIN -2147483647
using namespace std;


void print(vector<pair<char, int> > &data)
{
	for (int i = 0; i < data.size() - 1; ++i)
		cout << data[i].first << data[i].second << " ";

	cout << data.back().first << data.back().second << endl;
}


int main()
{
	string str;
	stack<int> s;
	while (cin >> str)
	{
		char c = str[0];
		if (c != '+' && c != '-' && c != '*' && c != '/')
		{
			s.push(stoi(str));
			continue;
		}
		int v1, v2;
		v2 = s.top(); s.pop();
		v1 = s.top(); s.pop();

		switch (c)
		{
		case '+': v1 += v2; break;
		case '-': v1 -= v2;	break; 
		case '*': v1 *= v2;	break;
		case '/': v1 /= v2;	break;
		}
		s.push(v1);
	}
	cout << s.top() << endl;
	return 0;
}