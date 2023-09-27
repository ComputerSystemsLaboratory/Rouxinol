#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int toInt(char c)
{
	//cout << c << endl;
	return (int)(c - '0');
}
int main()
{
	int n;
	while (cin >> n && n != 0)
	{
		vector<pair<int, int> > input;
		for (int i = 0; i < n; i++)
		{
			char line[15];
			pair<int, int> newRange;
			cin >> line;
			int hour = toInt(line[0]) * 10 + toInt(line[1]);
			int minute = toInt(line[3]) * 10 + toInt(line[4]);
			int second = toInt(line[6]) * 10 + toInt(line[7]);
			newRange.first = hour * 60 * 60 + minute * 60 + second;
			char line2[15];
			cin >> line2;
			hour = toInt(line2[0]) * 10 + toInt(line2[1]);
			minute = toInt(line2[3]) * 10 + toInt(line2[4]);
			second = toInt(line2[6]) * 10 + toInt(line2[7]);
			newRange.second = hour * 60 * 60 + minute * 60 + second;
			input.push_back(newRange);
		}

		sort(input.begin(),input.end());

		vector<pair<int, int> > out[10000 + 1];
		int vectorIndex = 0;
		for (int i = 0; i < n; i++)
		{
			bool flag = false;
			for (int j = 0; j < vectorIndex; j++)
			{
				bool f = false;
				for (int k = 0; k < out[j].size(); k++)
				{
					if (input.at(i).first >= out[j].at(k).first && input.at(i).first < out[j].at(k).second ||
						input.at(i).second > out[j].at(k).first && input.at(i).second <= out[j].at(k).second)
					{
						f = true;
						break;
					}
				}

				if (!f)
				{
					out[j].push_back(input.at(i));
					flag = true;
					break;
				}
			}

			if (!flag)
			{
				out[vectorIndex++].push_back(input.at(i));
			}
		}
		cout << vectorIndex << endl;
	}
	return 0;
}