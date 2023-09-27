#include <iostream>
#include <string>

using namespace std;
string character[10] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void solve()
{
	int N;
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		string s;
		cin >> s;
		for(int j = 0; j < s.size(); ++j)
		{
			int pos = j;
			int c = 0;
			if(s[pos] == '0')
			{
				continue;
			}
			else
			{
				c = s[pos] - '0';
			}
			bool zero_flag = true;
			while(s[pos] != '0')
			{
				++pos;
				if(pos >= s.size())
				{
					zero_flag = false;
					break;
				}
			}
			if(!zero_flag)
			{
				break;
			}
			if(pos > j)
			{
				--pos;
			}
			cout << character[c][(pos - j) % character[c].size()];
			j = pos;
		}
		cout << endl;
	}
}

int main()
{
	solve();
	return(0);
}