#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <chrono>
#include <numeric>
#include <set>

using namespace std;

class cDict
{
	string com, op;
	set<string> sd;
	set<string>::iterator it;

	void insert(string &);
	void find(string &);

public:
	cDict()
	{
	}

	~cDict()
	{
	}

	void command(string &);
};

void cDict::insert(string &s)
{
	sd.insert(s);
}

void cDict::find(string &s)
{
	it = sd.find(s);
	if (it != sd.end())
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
}

void cDict::command(string &s)
{
		istringstream iss(s);
		iss >> com >> op;
		if (com == "insert")
		{
			insert(op);
		}
		else if (com == "find")
		{
			find(op);
		}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	string str;
	cin >> n;
	cin.ignore();

	cDict cd;

	for (int i = 0; i < n; ++i)
	{
		getline(cin, str);
		cd.command(str);
	}

	return 0;
}