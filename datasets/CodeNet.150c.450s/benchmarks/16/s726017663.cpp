#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string line;
	cin >> line;
	vector<int> stack;
	vector<int> lakes;
	int all =0;
	int lake = 0;
	
	for (int i=0; i<line.length(); i++)
	{
		char c = line[i];
		if (c=='\\')
		{
			stack.push_back(i);
		}
		else if (c=='/')
		{
			if (stack.size() == 0) continue;
			auto end = stack.end() -1;
			lake += i - *end;
			stack.erase(end);
			if (stack.size() == 0)
			{
				all += lake;
				lakes.push_back(lake);
				lake = 0;
			}
		}
	}
	
	int mid = lakes.size();
	lake = 0;
	
	if (stack.size())
	{
		int end = stack[0];
		stack.clear();
		for (int i = line.length()-1; i >= end; i--)
		{
			char c = line[i];
			if (c=='/')
			{
				stack.push_back(i);
			}
			else if (c=='\\')
			{
				if (stack.size() == 0) continue;
				auto end = stack.end() -1;
				lake += *end - i;
				stack.erase(end);
				if (stack.size() == 0)
				{
					all += lake;
					lakes.push_back(lake);
					lake = 0;
				}
			}
		}
	}
	
	cout << all << endl;
	cout << lakes.size();
	for (int i=0; i<mid; i++)
	{
		cout << ' ' << lakes[i];
	}
	for (int i=lakes.size()-1; i>=mid;i--)
	{
		cout << ' ' << lakes[i];
	}
	cout << endl;
	
	return 0;
}