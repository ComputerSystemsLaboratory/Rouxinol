#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	stack<int> staLeft;
	vector<pair<int, int>> vecArea;
	char chIn;
	int nLeft;
	int nSum = 0;
	for (int i = 0; cin >> chIn; ++i)
	{
		if ('\\' == chIn)
		{
			staLeft.push(i);
		}
		else if (!staLeft.empty() && '/' == chIn)
		{
			nLeft = staLeft.top();
			staLeft.pop();
			int nTArea = i - nLeft;
			nSum += nTArea;
			while (!vecArea.empty() && vecArea.back().first > nLeft)
			{
				nTArea += vecArea.back().second;
				vecArea.pop_back();
			}
			vecArea.push_back(make_pair(nLeft, nTArea));
		}
	}
	cout << nSum << endl;
	cout << vecArea.size();
	pair<int, int> pA;
	for (auto a = vecArea.begin(); a != vecArea.end(); ++a)
	{
		pA = *a;
		cout << " " << pA.second;
	}
	cout << endl;
	return 0;
}
