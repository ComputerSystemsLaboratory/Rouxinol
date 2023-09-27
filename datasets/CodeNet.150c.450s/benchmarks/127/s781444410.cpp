#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		set<string> ss;
		cin >> str;
		for (int j = 0; j < str.length() - 1; j++)
		{
			string s1 = str.substr(0, j + 1);
			string s2 = str.substr(j + 1, str.length());
			string sr1 = s1;
			string sr2 = s2;
			reverse(sr1.begin(), sr1.end());
			reverse(sr2.begin(), sr2.end());
			ss.insert(s1 + s2);
			ss.insert(s2 + s1);
			ss.insert(sr1 + s2);
			ss.insert(s2 + sr1);
			ss.insert(s1 + sr2);
			ss.insert(sr2 + s1);
			ss.insert(sr1 + sr2);
			ss.insert(sr2 + sr1);
		}
		cout << ss.size() << endl;
	}
}
