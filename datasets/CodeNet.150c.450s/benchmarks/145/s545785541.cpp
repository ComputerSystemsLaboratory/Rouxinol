#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

struct Data
{
	string word;
	int count;

	Data()
	{
		
	}

	Data(string word)
	{
		this->word = word;
		this->count = 1;
	}
};

int main()
{
	vector<Data> d;

	string str;
	getline(cin, str);

	stringstream ss;
	ss << str;

	string s;
	for (; ss >> s;)
	{
		int i;
		bool b = false;
		for (i = 0; i < d.size(); i++)
		{
			if (d.at(i).word == s)
			{
				b = true;
				break;
			}
		}

		if (b)
		{
			d.at(i).count++;
		}
		else
		{
			d.push_back(Data(s));
		}
	}

	int maxw = 0;
	int maxl = 0;

	string w, l;
	for (int i = 0; i < d.size(); i++)
	{
		if (d.at(i).count > maxw)
		{
			w = d.at(i).word;
			maxw = d.at(i).count;
		}

		if (d.at(i).word.size() > maxl)
		{
			l = d.at(i).word;
			maxl = d.at(i).word.size();
		}
	}

	cout << w << " " << l << endl;
}
