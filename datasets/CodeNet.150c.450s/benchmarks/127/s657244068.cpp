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
			string S[] = { s1,sr1,s2,sr2 };
			for(int i=0;i<=1;i++)
				for (int j =2; j <= 3; j++)
				{
					ss.insert(S[i] + S[j]);
					ss.insert(S[j] + S[i]);
				}
		}
		cout << ss.size() << endl;
	}
}
