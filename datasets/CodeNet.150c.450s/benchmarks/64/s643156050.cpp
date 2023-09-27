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

class cExhaustiveSearch
{
	int mn, mq;
	string mA, mm;
	vector<int> vA, vm;

	void decode();
	bool search(int, int);

public:
	cExhaustiveSearch(int n, int q, const string &a, const string &m)
		: mn(n), mq(q)
	{
		mA = a;
		mm = m;
		decode();
	}
	void output();
};

bool cExhaustiveSearch::search(int i, int m)
{
	if (m == 0) return true;
	if (i >= vA.size()) return false;
	if (search(i + 1, m)) return true;
	if (search(i + 1, m - vA[i])) return true;
	return false;
}

void cExhaustiveSearch::output()
{
	string ans;
	for (int i = 0; i < vm.size(); ++i)
	{
		search(0, vm[i]) ? ans = "yes" : ans = "no";
		cout << ans << endl;
	}
}

void cExhaustiveSearch::decode()
{
	istringstream iss;
	iss.str(mA);
	int ts;
	for (int i = 0; i < mn; ++i)
	{
		iss >> ts;
		vA.push_back(ts);
	}
	iss.str(mm);
	iss.seekg(0, iss.beg);
	for (int i = 0; i < mq; ++i)
	{
		iss >> ts;
		vm.push_back(ts);
	}
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, q;
	string A, m;

	cin >> n;
	cin.ignore();
	getline(cin, A);

	cin >> q;
	cin.ignore();
	getline(cin, m);

	cExhaustiveSearch ces(n, q, A, m);
	ces.output();

	return 0;
}