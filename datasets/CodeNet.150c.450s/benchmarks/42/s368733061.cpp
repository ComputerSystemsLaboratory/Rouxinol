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

using namespace std;

class cProcess
{
	vector<pair<string, int>> vfinish;
	int etime;

	void output();

public:
	cProcess(int qua,queue<pair<string, int>> p)
	{
		etime = 0;
		pair<string, int> tp;

		while (!p.empty())
		{

			tp = p.front();
			p.pop();
			if ((tp.second - qua) > 0)
			{
				etime += qua;
				tp.second -= qua;
				p.push(tp);
			}
			else
			{
				etime += tp.second;
				vfinish.push_back(pair <string, int>(tp.first, etime));
			}
		}
		output();
	}
};

void cProcess::output()
{
	for (int i = 0; i < vfinish.size(); ++i)
	{
		cout << vfinish[i].first << " " << vfinish[i].second << endl;
	}
}

int main()
{
	int n, q;
	cin >> n >> q;

	queue<pair<string, int>> qp;

	for (int i = 0; i < n; ++i)
	{
		string tn;
		int tt;
		cin >> tn >> tt;
		pair<string, int> tp(tn, tt);
		qp.push(tp);
	}

	cProcess cp(q,qp);

	return 0;
}