#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>


using namespace std;


int nextA(int preA,int L)
{
	vector<int> digitA;
	for (int i = 0; i < L; ++i)
	{
		digitA.emplace_back(preA % 10);
		preA /= 10;
	}
	sort(digitA.begin(), digitA.end());
	int big = 0;
	int small = 0;
	for (int i = 0; i < L; ++i)
	{
		big *= 10;
		small *= 10;
		big += digitA[i];
		small += digitA[L - i - 1];
	}
	return small - big;
}


int main()
{
	while (true)
	{
		int a, L;
		cin >> a >> L;
		if (a == 0 && L == 0)return 0;

		unordered_map<int, int> mp;

		for (int i = 0;; ++i)
		{
			if (mp.count(a))
			{
				cout << mp[a] << " " << a << " " << i - mp[a] << endl;
				break;
			}
			mp[a] = i;
			a = nextA(a, L);
		}
	}
}
