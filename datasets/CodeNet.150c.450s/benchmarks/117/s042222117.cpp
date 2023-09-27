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

class cMergeSort
{
	int mn;
	string mS;
	vector<int> vS, vA;
	int count;

	void decode();
	void mSort(vector<int>&, int, int);
	void merge(vector<int>&, int, int, int);
	const int infty = pow(256, sizeof(int)) / 2 - 1;

public:
	cMergeSort(int n, const string &s)
		: mn(n), count(0)
	{
		mS = s;
		decode();
	}
	void output();
};

void cMergeSort::decode()
{
	istringstream iss;
	iss.str(mS);
	int ts;
	for (int i = 0; i < mn; ++i)
	{
		iss >> ts;
		vS.push_back(ts);
	}
}

void cMergeSort::mSort(vector<int> &va, int left, int right)
{
	if (left + 1 < right)
	{
		int mid = (left + right) / 2;
		mSort(va, left, mid);
		mSort(va, mid, right);
		merge(va, left, mid, right);
	}
}

void cMergeSort::merge(vector<int> &va, int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	vector<int> vL(n1 + 1), vR(n2 + 1);

	for (int i = 0; i < n1; ++i)
	{
		vL[i] = va[left + i];
	}
	for (int i = 0; i < n2; ++i)
	{
		vR[i] = va[mid + i];
	}
	vL[n1] = infty;
	vR[n2] = infty;

	int i = 0;
	int j = 0;

	for (int k = left; k < right; ++k)
	{
		if (vL[i] <= vR[j])
		{
			va[k] = vL[i];
			++i;
		}
		else
		{
			va[k] = vR[j];
			++j;
		}
		++count;
	}
}

void cMergeSort::output()
{
	vA = vS;
	mSort(vA, 0, vA.size());

	ostringstream oss;
	for (int i = 0; i < vA.size(); ++i)
	{
		oss << vA[i] << " ";
	}
	string ans(oss.str());
	ans.replace(ans.rfind(" "),ans.size(), "");
	cout << ans << endl;
	cout << count << endl;
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	string S;

	cin >> n;
	cin.ignore();
	getline(cin, S);

	cMergeSort cm(n, S);
	cm.output();

	return 0;
}