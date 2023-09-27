#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#include<string>
#define _USE_MATH_DEFINES

#include<math.h>
#include<unordered_map>

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

int main()
{
	vector<string> input;
	while (true)
	{
		string s;
		cin >> s;
		if (s == "-")
		{
			break;
		}
		else
		{
			input.push_back(s);

			int n;
			cin >> n;
			for (int i = 0; i < n; i++)
			{
				int r;
				cin >> r;
				input.back() = input.back() + input.back();
				string temp;
				for (int j = 0; j != input.back().size(); j++)
				{
					if (r <= j&&j < (input.back().size() / 2 + r))
					{
						temp += input.back()[j];
					}
				}
				input.back() = temp;
			}
		}
	}

	for (auto& s : input)
	{
		cout << s << endl;
	}
	return 0;
}