#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	vector<int> flood;
	int count = 0;
	int depth;
	double area;
	double totalarea = 0;
	for (int i = 0; i < s.size(); i++)
	{
		area = 0;
		depth = 0;
		// '_', '/'はfloodの始点とはならない
		if (s[i] != '\\') continue;
		// iを始点としてareaを計算、同じ高さに戻ってきたらループ終了
		for (int j = i; j < s.size(); j++)
		{
			switch (s[j])
			{
			case '\\':
				area += 0.5 + depth;
				depth++;
				break;
			case '_':
				area += depth;
				break;
			case '/':
				depth--;
				area += 0.5 + depth;
				break;
			default:
				break;
			}
			if (depth == 0)
			{
				i = j;
				break;
			}
		}
		if (depth == 0)
		{
			flood.push_back(area);
			totalarea += area;
			count++;
		}
		else
		{
			continue;
		}
	}
	cout << setprecision(10) << totalarea << endl;
	cout << count;
	for (int i = 0; i < flood.size(); i++)
	{
		cout << ' ' << flood[i];
	}
	cout << endl;
	return 0;
}
