#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class cCard
{
public:
	char suit;
	int value;
	cCard(string t)
	{
		istringstream iss(t);
		iss >> suit >> value;
	}
};

class cCards
{
	int m_n;

public:
	bool isStable;
	vector<cCard> cc;

	cCards(string c, int n)
	{
		m_n = n;

		vector<string> tc;
		istringstream iss(c);
		while (!iss.eof())
		{
			string t;
			iss >> t;
			cCard tc(t);
			cc.push_back(tc);
		}
	}

	bool BubbleSort();
	void SelectionSort();
	string getStr();

};

bool cCards::BubbleSort()
{
	isStable = true;
	for (int i = 0; i < m_n; ++i)
	{
		for (int j = m_n - 1; j > i; --j)
		{
			if (cc[j].value < cc[j - 1].value)
			{
				swap(cc[j], cc[j - 1]);
				if (cc[j].value == cc[j - 1].value && cc[i].suit != cc[j - 1].suit)
				{
					isStable = false;
				}
				else
				{
					isStable = true;
				}
			}
		}
	}
	return isStable;
}

void cCards::SelectionSort()
{
	isStable = true;
	for (int i = 0; i < m_n; ++i)
	{
		int minj = i;
		for (int j = i; j < m_n; ++j)
		{
			if (cc[j].value < cc[minj].value)
			{
				minj = j;
			}
		}
		swap(cc[i], cc[minj]);
	}
}

string cCards::getStr()
{
	ostringstream oss;
	for (int i = 0; i < cc.size() - 1; ++i)
	{
		oss << cc[i].suit << cc[i].value << " ";
	}
	oss << cc[cc.size() - 1].suit << cc[cc.size() - 1].value;
	return oss.str();
}

int main()
{
	int N;
	cin >> N;
	cin.ignore();

	string C;
	getline(cin, C);

	cCards ccd1(C,N);
	string ans1 = ccd1.BubbleSort() ? "Stable" : "Not stable";
	cout << ccd1.getStr() << endl;
	cout << ans1 << endl;
	cCards ccd2(C,N);
	ccd2.SelectionSort();
	cout << ccd2.getStr() << endl;
	string ans2 = (ccd1.getStr() == ccd2.getStr()) ? "Stable" : "Not stable";
	cout << ans2 << endl;

	return 0;
}