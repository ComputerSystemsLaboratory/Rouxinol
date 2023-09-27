#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

class cTop3Hills
{
	vector<int> m_vh;
public:
	cTop3Hills(vector<int> &v)
	{
		m_vh = v;
	}
	void compare();
};

bool comp(int i, int j) { return i > j; }

void cTop3Hills::compare()
{
	sort(m_vh.begin(), m_vh.end(), comp);
	for (int i = 0; i < 3; ++i)
		cout << m_vh[i] << endl;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	vector<int> vh;
	int th;
	for (int i = 0; i < 10; ++i)
	{
		cin >> th;
		vh.push_back(th);
	}

	cTop3Hills ct(vh);
	ct.compare();

	return 0;
}