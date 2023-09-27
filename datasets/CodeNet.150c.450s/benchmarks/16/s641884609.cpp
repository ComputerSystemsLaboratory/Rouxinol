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

using namespace std;

class cFlood
{
	string tb;
	int A;
	int k;
	vector<int> vL;
	vector<int> vLrev;

public:
	cFlood(){}
	cFlood(const string &c)
	{
		tb = c;
	}

	void calcflood();
	void output();
};

void cFlood::calcflood()
{
	string::iterator it = tb.begin();

	int hstd = 0;
	vector<int> vheight;

	int th = hstd;
	vheight.push_back(th);
	int stdIndex = 0;
	for (int i = 0; i < tb.size(); ++i)
	{
		if (tb[i] == '\\')
		{
			th -= 1;
		}
		else if (tb[i] == '_')
		{
			th = th;
		}
		else if (tb[i] == '/')
		{
			th += 1;
		}

		vheight.push_back(th);
	}

	int tsum;
	for (int i = 1; i < vheight.size(); ++i)
	{
		if (hstd == vheight[i])
		{
			tsum = 0;

			for (int j = stdIndex; j <= i; ++j)
			{
				tsum += hstd - vheight[j];
			}
			if (tsum > 0)
				vL.push_back(tsum);
		}

		if (hstd <= vheight[i])
		{
			hstd = vheight[i];
			stdIndex = i;
		}
	}
	int hstd_rev = vheight[vheight.size() - 1];
	int stdIndex_rev = vheight.size() - 1;
	for (int i = vheight.size() - 2; i > stdIndex; --i)
	{
		if (hstd_rev <= vheight[i])
		{
			tsum = 0;

			for (int j = stdIndex_rev; j >= i; --j)
			{
				tsum += hstd_rev - vheight[j];
			}
			if (tsum > 0)
				vLrev.push_back(tsum);
		}
		if (hstd_rev <= vheight[i])
		{
			hstd_rev = vheight[i];
			stdIndex_rev = i;
		}
	}

	for (int i = vLrev.size() - 1; i >= 0; --i)
	{
		vL.push_back(vLrev[i]);
	}
	A = accumulate(vL.begin(), vL.end(), 0);
}

void cFlood::output()
{
	ostringstream oss;
	oss << vL.size() << " ";
	for (int i = 0; i < vL.size(); ++i)
	{
		oss << vL[i] << " ";
	}
	string ans(oss.str());
	ans.rfind(" ");
	ans.replace(ans.rfind(" "),ans.size(), "");
	cout << A << endl;
	cout << ans << endl;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	string s;
	cin >> s;

	cFlood cf(s);
	cf.calcflood();
	cf.output();

	return 0;
}