#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	while(n--)
	{
		string str;
		cin >> str;
		set<string> Set;
		int size = str.size();
		for(int i = 1; i < size; ++i)
		{
			string first;
			string second;
			for(int j = 0; j < i; ++j)
			{
				first += str[j];
			}
			for(int j = i; j < size; ++j)
			{
				second += str[j];
			}
			string revFirst = first;
			string revSecond = second;
			reverse(revFirst.begin(), revFirst.end());
			reverse(revSecond.begin(), revSecond.end());
			Set.insert(first + second);
			Set.insert(first + revSecond);
			Set.insert(revFirst + second);
			Set.insert(revFirst + revSecond);
			Set.insert(second + first);
			Set.insert(second + revFirst);
			Set.insert(revSecond + first);
			Set.insert(revSecond + revFirst);
		}
		cout << Set.size() << endl;
	}
}

int main()
{
	solve();
	return(0);
}