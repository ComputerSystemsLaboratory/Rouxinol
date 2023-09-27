#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;

class cIsRightTriangle
{
public:
	bool judge(vector<int>&);
};

bool cIsRightTriangle::judge(vector<int> &v)
{
	sort(v.begin(), v.end());
	if (v[2] * v[2] == (v[0] * v[0] + v[1] * v[1]))
		return true;
	else
		return false;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	cIsRightTriangle ct;
	vector<int> vd(3);

	for (int i = 0; i < n; ++i)
	{
		cin >> vd[0] >> vd[1] >> vd[2];
		cout << (ct.judge(vd) ? string("YES") : string("NO")) << endl;
	}

	return 0;
}