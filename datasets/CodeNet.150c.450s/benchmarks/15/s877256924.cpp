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

class cLSearch
{
	int mn, mq;
	string mS, mT;
	vector<int> vs, vt;
	int ans;

	void decode();
public:
	cLSearch(const int &n, const int &q, const string &s, const string &t)
	{
		mn = n;
		mq = q;
		mS = s;
		mT = t;

		decode();
	}

	void search();
	void output();
};

void cLSearch::search()
{
	sort(vs.begin(), vs.end());
	sort(vt.begin(), vt.end());
	int count = 0;
	vector<int>::iterator vis = vs.begin();
	vector<int>::iterator vit = vt.begin();

	int ts, tt;
	while (vis != vs.end() && vit != vt.end())
	{
		if (*vis == *vit)
		{
			++count;
			ts = *vis;
			tt = *vit;
			while (vis != vs.end() && ts == *vis)
				++vis;
			while (vit != vt.end() && tt == *vit)
				++vit;
		}
		else
		{
			if (vis != vs.end() && vit != vt.end() && *vis > *vit)
				++vit;
			else
				++vis;
		}
	}

	ans = count;
}

void cLSearch::output()
{
	cout << ans << endl;
}
void cLSearch::decode()
{
	istringstream iss;
	iss.str(mS);
	int ts;
	for (int i = 0; i < mn; ++i)
	{
		iss >> ts;
		vs.push_back(ts);
	}
	iss.str(mT);
	iss.seekg(0, iss.beg);
	for (int i = 0; i < mq; ++i)
	{
		iss >> ts;
		vt.push_back(ts);
	}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, q;
	string s, t;
	cin >> n;
	cin.ignore();
	getline(cin, s);
	cin >> q;
	cin.ignore();
	getline(cin, t);

	cLSearch cls(n, q, s, t);
	cls.search();
	cls.output();

	return 0;
}